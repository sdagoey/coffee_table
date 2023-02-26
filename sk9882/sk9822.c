#include "sk9882.h"


void update_LED_string(unsigned char *blue_array,unsigned char *red_array, unsigned char *green_array){
    unsigned char led_data_frame[4];
//send start frame here
    HAL_SPI_Transmit(&hspi1,(unsigned char *) &start_frame,4,100);
//    LED_blue_array[0] = 0x16;

    for(int i = 0; i < NUM_LEDS; i++){

        led_data_frame[1] = 0x16;
//        led_data_frame[1] = blue_array[i];
        led_data_frame[2] = green_array[i];
        led_data_frame[3] = red_array[i];
        if(blue_array[i]+green_array[i]+red_array[i]){
            led_data_frame[0] = (0xe<<4) | global_brighness;
        }
        else{
            led_data_frame[0] = (0xe<<4);
        }
//        led_data_frame[1] = 0x05;
//        led_data_frame[2] = 0x00;
//        led_data_frame[3] = 0x00;
        //send led frame with IT if not busy
        //send led frame with IT if not busy
        HAL_SPI_Transmit(&hspi1,(unsigned char *) &led_data_frame,4,100);
        //HAL_Delay(100);
    }
    HAL_SPI_Transmit(&hspi1, (unsigned char *) &end_frame,4,100);

    //send end frame

}

void clear_all_LEDs(){
    HAL_SPI_Transmit_IT(&hspi1,(unsigned char *) &start_frame,4);
    HAL_Delay(1000);
    unsigned char led_data_frame[4];
    for(int i = 0; i < 144; i++){
        led_data_frame[0] = (0x0<<4) | 0x00;
        //HAL_SPI_Transmit_IT(&hspi1,(unsigned char *) &led_data_frame[0],1);
        led_data_frame[1] = 0x00;
        //HAL_SPI_Transmit_IT(&hspi1,(unsigned char *) &led_data_frame[1],1);
        led_data_frame[2] = 0x00;
        //HAL_SPI_Transmit_IT(&hspi1,(unsigned char *) &led_data_frame[2],1);
        led_data_frame[3] = 0x00;
        //HAL_SPI_Transmit_IT(&hspi1,(unsigned char *) &led_data_frame[3],1);
        //send led frame with IT if not busy
        HAL_SPI_Transmit_IT(&hspi1,(unsigned char *) &led_data_frame,4);
        HAL_Delay(1000);
        //HAL_Delay(100);
    }
    HAL_SPI_Transmit_IT(&hspi1, (unsigned char *) &end_frame,4);
    HAL_Delay(1000);
}
