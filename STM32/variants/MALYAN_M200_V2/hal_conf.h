/***************  HAL_Conf default here ******************/
//default defines,  overriden by HAL_Conf.h in sketch path
//OS
#define FREERTOS    0

#define UCOSII      0

#ifndef BOOTLOADER	/*chech & go if avalible */
#define BOOTLOADER  0
#endif

//USB

#define USE_USBSERIAL 1
#define MENU_USB_SERIAL SerialUSB
#define USE_USBSERIAL 1
#define USE_USB 1


//USART
#define USE_SERIAL1 1
#define USE_SERIAL2 1
#define USE_SERIAL3 0
#define USE_SERIAL4 0
#define USE_SERIAL5 0
#define USE_SERIAL6 0
#define USE_LPUART1 0

//SPI
#define USE_SPI1 1
#define USE_SPI2 1
#define USE_SPI3 0
#define USE_SPI4 0
#define USE_SPI5 0
#define USE_SPI6 0

//I2C
#define USE_I2C1 1
#define USE_I2C2 0
#define USE_I2C3 0
#define USE_I2C4 0

//default
//PRIORITY
//Cortex-M0/3/4/7 Processor Exceptions
#ifndef CORTEX_INT_PRIORITY /* M3 Numbers:  -14 ~ -1*/
 #define CORTEX_INT_PRIORITY 0
#endif

#if defined(STM32F0)||defined(STM32L0)

#ifndef MAX_PRIORITY
 #define MAX_PRIORITY    3
#endif

#ifndef MIN_PRIORITY
 #define MIN_PRIORITY    0
#endif

#ifndef SYSTICK_INT_PRIORITY
 #if FREERTOS
  #define SYSTICK_INT_PRIORITY	MAX_PRIORITY
  #define STM32_INT_PRIORITY	2
 #else
  #define SYSTICK_INT_PRIORITY	MIN_PRIORITY
  #define STM32_INT_PRIORITY	2
 #endif
#endif

//STN32 specific Interrupt

#ifndef TAMPER_PRIORITY
 #define TAMPER_PRIORITY  STM32_INT_PRIORITY
#endif

#ifndef RTC_PRIORITY  /*3*/
 #define RTC_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef RCC_PRIORITY
 #define RCC_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef EXTI_PRIORITY
 #define EXTI_PRIORITY    STM32_INT_PRIORITY
#endif
#ifndef DMA1_PRIORITY    /*F0 9~11*/
 #define DMA1_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef ADC_PRIORITY
 #define ADC_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef USB_HP_PRIORITY
 #define USB_HP_PRIORITY  STM32_INT_PRIORITY
#endif
#ifndef USB_LP_PRIORITY
 #define USB_LP_PRIORITY  STM32_INT_PRIORITY
#endif
#ifndef TIM_PRIORITY
 #define TIM_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef I2C_PRIORITY
 #define I2C_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef SPI_PRIORITY
 #define SPI_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef USART_PRIORITY
 #define USART_PRIORITY   STM32_INT_PRIORITY
#endif
#ifndef SDIO_PRIORITY
 #define SDIO_PRIORITY    STM32_INT_PRIORITY-1
#endif
#ifndef DMA2_PRIORITY
 #define DMA2_PRIORITY     STM32_INT_PRIORITY
#endif

#else  //F1/2/3/4/7 L1/4


#ifndef MAX_PRIORITY
 #define MAX_PRIORITY    15
#endif
#ifndef MIN_PRIORITY
 #define MIN_PRIORITY    0
#endif

#ifndef SYSTICK_INT_PRIORITY
 #if FREERTOS
  #define SYSTICK_INT_PRIORITY	MAX_PRIORITY
  #define STM32_INT_PRIORITY	5
 #else
  #define SYSTICK_INT_PRIORITY	MIN_PRIORITY
  #define STM32_INT_PRIORITY	5
 #endif
#endif


#ifndef STM32_INT_PRIORITY
#endif
#ifndef TAMPER_PRIORITY  /*f1 2*/
#define TAMPER_PRIORITY  STM32_INT_PRIORITY
#endif
#ifndef RTC_PRIORITY  	/*f1 3*/
#define RTC_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef RCC_PRIORITY	/*f1 5*/
#define RCC_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef EXTI_PRIORITY	/*f1 6~10,23,40*/
#define EXTI_PRIORITY    MAX_PRIORITY+1  //f1 6~9 botton  use 0x0f
#endif
#ifndef DMA1_PRIORITY   /*f1 11~17*/
#define DMA1_PRIORITY    STM32_INT_PRIORITY
#endif
#ifndef ADC_PRIORITY    /*f1 18*/
#define ADC_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef USB_HP_PRIORITY  /*f1 19*/
#define USB_HP_PRIORITY  STM32_INT_PRIORITY
#endif
#ifndef USB_LP_PRIORITY  /*f1 20*/
#define USB_LP_PRIORITY  STM32_INT_PRIORITY
#endif
#ifndef TIM_PRIORITY  /*f1 24~30 43~46 54~55*/
#define TIM_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef I2C_PRIORITY  /*f1 31~34*/
#define I2C_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef SPI_PRIORITY  /*f1 35 36 51*/
#define SPI_PRIORITY     STM32_INT_PRIORITY
#endif
#ifndef USART_PRIORITY  /*f1 37~39 52~53*/
#define USART_PRIORITY   STM32_INT_PRIORITY
#endif
#ifndef SDIO_PRIORITY  /*f1 49*/
#define SDIO_PRIORITY    STM32_INT_PRIORITY-1
#endif
#ifndef DMA2_PRIORITY  /*f1 56~59*/
#define DMA2_PRIORITY    STM32_INT_PRIORITY
#endif

#endif

/***************  HAL_Conf default end  ******************/
