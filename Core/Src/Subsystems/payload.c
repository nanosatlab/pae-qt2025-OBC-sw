
/* ---- Includes ---- */
#include <stdio.h> //mirar
#include "FreeRTOS.h"
#include "main.h"

/* ---- Macros and constants ---- */
// ..

/* ---- Type definitions ---- */
// ..

/* ---- Module-level variables ---- */
// ..

/* ---- Private function prototypes ---- */
static void setup_payload(void);
static void process_payload(void);
static uint32_t wait_for_notification(void);
static void capture_temperature(void);

/* ---- Public function definitions ---- */

void payload_task(void *pv_parameters) {
    
    setup_payload();

    for (;;) {
        process_payload();
    }

}

/* ---- Private function definitions ---- */

void setup_payload(void) {

    // Apply default configuration
    // ...
    
}

void process_payload(void) {

    uint32_t notificationValue = wait_for_notification();

    if (notificationValue & PAYLOAD_TEMP_CAPTURE) {
        capture_temperature();
    }
    // if ... (not else if!!)

}

uint32_t wait_for_notification(void) {

    uint32_t notificationValue;
    xTaskNotifyWait( 0,          // don’t clear on entry
                    0xFFFFFFFF,  // clear all bits on exit
                    &notificationValue,
                    portMAX_DELAY );
    return notificationValue;

}

void capture_temperature(void) {

    // /* 1. Initialize temperature sensor with current settings */
    // initSens(huart4, resolution, compressibility, info);

    // /* 2. Take the temperature into ‘info’ buffer */
    // getTemperature(huart4, info);

    printf("Capturing temperature...\n");

}