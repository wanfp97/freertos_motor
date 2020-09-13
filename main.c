/*
 * main.c
 *
 *  Created on: 2020 Sep 02 12:52:04
 *  Author: FORGE-15R
 */




#include <DAVE.h>                 //Declarations from DAVE Code Generation (includes SFR declaration)
#include "ext_lib/base.h"

/**

 * @brief main() - Application entry point
 *
 * <b>Details of function</b><br>
 * This routine is the application entry point. It is invoked by the device startup code. It is responsible for
 * invoking the APP initialization dispatcher routine - DAVE_Init() and hosting the place-holder for user application
 * code.
 */

volatile uint32_t pin_status;

static void tle94112el_enable(void);
static void tle94112el_disable(void);
static int32_t tle94112el_spi_transfer(uint8_t *tx_data, uint8_t *rx_data);

static const TLE94112EL_t TLE94112EL_0 =

  {

    .enable = tle94112el_enable,

    .disable = tle94112el_disable,

    .spi_transfer = tle94112el_spi_transfer

  };

TaskHandle_t FORWARD_Handle = NULL;
TaskHandle_t BACKWARD_Handle = NULL;
TaskHandle_t LEFT_Handle = NULL;
TaskHandle_t RIGHT_Handle = NULL;

SemaphoreHandle_t FORWARD_interruptSemaphore;
SemaphoreHandle_t BACKWARD_interruptSemaphore;
SemaphoreHandle_t LEFT_interruptSemaphore;
SemaphoreHandle_t RIGHT_interruptSemaphore;

void FORWARD_Task(void *p){

//	volatile uint32_t pin_status;
	while(1){

		if (xSemaphoreTake(FORWARD_interruptSemaphore, portMAX_DELAY) == pdPASS){

			pin_status = PIN_INTERRUPT_GetPinValue(&FORWARD_INTERRUPT);
			if(pin_status==1){
				//FORWARD
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x01, 0x99);
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x03, 0x99);
			}

			else{
				//stop
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x01, 0x00);
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x03, 0x00);
			}
		}
	}
}

void BACKWARD_Task(void *p){

//	uint32_t pin_status;
	while(1){

		if (xSemaphoreTake(BACKWARD_interruptSemaphore, portMAX_DELAY) == pdPASS){

			pin_status = PIN_INTERRUPT_GetPinValue(&BACKWARD_INTERRUPT);
			if(pin_status==1){
				//BACKWARD
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x01, 0x66);
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x03, 0x66);
			}

			else{
				//stop
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x01, 0x00);
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x03, 0x00);
			}
		}
	}
}

void LEFT_Task(void *p){

//	uint32_t pin_status;
	while(1){

		if (xSemaphoreTake(LEFT_interruptSemaphore, portMAX_DELAY) == pdPASS){

			pin_status = PIN_INTERRUPT_GetPinValue(&BACKWARD_INTERRUPT);
			if(pin_status==1){
				//LEFT
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x01, 0x66);
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x03, 0x99);
			}

			else{
				//stop
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x01, 0x00);
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x03, 0x00);
			}
		}
	}
}

void RIGHT_Task(void *p){

//	uint32_t pin_status;
	while(1){

		if (xSemaphoreTake(RIGHT_interruptSemaphore, portMAX_DELAY) == pdPASS){

			pin_status = PIN_INTERRUPT_GetPinValue(&BACKWARD_INTERRUPT);
			if(pin_status==1){
				//RIGHT
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x01, 0x99);
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x03, 0x66);
			}

			else{
				//stop
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x01, 0x00);
				TLE94112EL_SetHBRegdata(&TLE94112EL_0, 0x03, 0x00);
			}
		}
	}
}
int main(void)
{
  DAVE_STATUS_t status;

  status = DAVE_Init();           /* Initialization of DAVE APPs  */

  if(status != DAVE_STATUS_SUCCESS)
  {
    /* Placeholder for error handler code. The while loop below can be replaced with an user error handler. */
    XMC_DEBUG("DAVE APPs initialization failed\n");

    while(1U)
    {

    }
  }

	// Preparing variables

	// Initialize DC Motor Shield


	TLE94112EL_Enable(&TLE94112EL_0);
	// Initialize DC Motor Shield


	// Initialize the FreeRTOS
	xTaskCreate(FORWARD_Task, "FORWARD", 200, NULL, tskIDLE_PRIORITY, &FORWARD_Handle);
	xTaskCreate(BACKWARD_Task, "BACKWARD", 200, NULL, tskIDLE_PRIORITY, &BACKWARD_Handle);
	xTaskCreate(LEFT_Task, "LEFT", 200, NULL, tskIDLE_PRIORITY, &LEFT_Handle);
	xTaskCreate(RIGHT_Task, "RIGHT", 200, NULL, tskIDLE_PRIORITY, &RIGHT_Handle);

	FORWARD_interruptSemaphore = xSemaphoreCreateBinary();
	BACKWARD_interruptSemaphore = xSemaphoreCreateBinary();
	LEFT_interruptSemaphore = xSemaphoreCreateBinary();
	RIGHT_interruptSemaphore = xSemaphoreCreateBinary();
	vTaskStartScheduler();
	// Initialize the FreeRTOS




  /* Placeholder for user application code. The while loop below can be replaced with user application code. */
  while(1U)
  {

  }
}

void FORWARD_IRQHandler(void){

	xSemaphoreGiveFromISR(FORWARD_interruptSemaphore, NULL);
}

void BACKWARD_IRQHandler(void){

	xSemaphoreGiveFromISR(BACKWARD_interruptSemaphore, NULL);
}

void LEFT_IRQHandler(void){

	xSemaphoreGiveFromISR(LEFT_interruptSemaphore, NULL);
}

void RIGHT_IRQHandler(void){

	xSemaphoreGiveFromISR(RIGHT_interruptSemaphore, NULL);
}


static void tle94112el_enable(void)

{

  DIGITAL_IO_SetOutputHigh(&TLE94112_ENABLE);

}

static void tle94112el_disable(void)

{

  DIGITAL_IO_SetOutputLow(&TLE94112_ENABLE);

}

static int32_t tle94112el_spi_transfer(uint8_t *tx_data, uint8_t *rx_data)

{

  XMC_SPI_CH_SetBitOrderLsbFirst(SPI_MASTER_0.channel);



  DIGITAL_IO_SetOutputLow(&TLE94112_CS);



  SPI_MASTER_Transfer(&SPI_MASTER_0, tx_data, rx_data, 2);

  while(SPI_MASTER_0.runtime->rx_busy);



  DIGITAL_IO_SetOutputHigh(&TLE94112_CS);



  return 0;

}
