/*******************************************************************************************************
  Programs for Arduino - Copyright of the author Stuart Robinson - 19/06/20

  This program is supplied as is, it is up to the user of the program to decide if the program is
  suitable for the intended purpose and free from errors.
*******************************************************************************************************/

//*******  Setup hardware pin definitions here ! ***************

//These are the pin definitions for one of my own boards, the Easy Mikrobus Pro Mini,
//be sure to change the definitions to match your own setup. BUZZER may not be used
//by this sketch so they do not need to be connected and should be set to -1.

#define NSS 10                                  //select pin on lora device
#define NRESET 9                                //reset pin on lora device
#define RFBUSY 7                                //busy pin on lora device  
#define DIO1 3                                  //DIO1 pin on lora device, used for RX and TX done 

#define LED1 8                                  //on board LED, high for on
#define BUZZER -1                               //pin for buzzer, on when logic high

#define LORA_DEVICE DEVICE_SX1262               //we need to define the device we are using


//*******  Setup LoRa Parameters Here ! ***************

//LoRa Modem Parameters
const uint32_t Frequency = 434000000;           //frequency of transmissions in hertz
const uint32_t Offset = 0;                      //offset frequency for calibration purposes

const uint8_t Bandwidth = LORA_BW_125;          //LoRa bandwidth
const uint8_t SpreadingFactor = LORA_SF7;       //LoRa spreading factor
const uint8_t CodeRate = LORA_CR_4_5;           //LoRa coding rate
const uint8_t Optimisation = LDRO_AUTO;         //low data rate optimisation setting, normally set to auto

const int8_t TXpower = 10;                       //LoRa transmit power in dBm

const uint16_t packet_delay = 1000;             //mS delay between packets

#define RXBUFFER_SIZE 32                        //RX buffer size  
const uint16_t packetCRCcheck = 0x3F83;         //CRC to check RX packet for 
const uint8_t packetCRClengthcheck = 23;        //packet length to check for 


