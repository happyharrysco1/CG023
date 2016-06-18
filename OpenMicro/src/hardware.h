
// HARDWARE PINS SETTING
//
// do not change hardware pins below
// make sure you don't set SWDIO or SWDCLK pins (programming pins)
// if you do, you lose board programmability without a reset pin
//
// example: pin "PB2" ( port b , pin 2 )
// pin: GPIO_Pin_2
// port: GPIOB


// setting procedure:
// set led number zero, led aux number zero
// uncomment DISABLE_SOFTI2C_PINS , DISABLE_SPI_PINS and DISABLE_PWM_PINS
// this will prevent any pins to be used, so that there are no conflicts
// set pins starting with leds, in order to see working status
// do not set PA13 , PA14 (stm32f031) as this will break the programming interface
// to disable led pins set number to zero



// always on pin ( for vreg if present)
// used by cx-10 boards and other quads with switches
// comment out to disable
//#define ENABLE_VREG_PIN

#define VREG_PIN_1 GPIO_Pin_5
#define VREG_PORT_1 GPIOA


// set zero to disable (0 - 4)
#define LED_NUMBER 2

#define LED1PIN GPIO_Pin_4
#define LED1PORT GPIOA

#define LED2PIN GPIO_Pin_12
#define LED2PORT GPIOA

//#define LED3PIN GPIO_Pin_9
//#define LED3PORT GPIOA

//#define LED4PIN GPIO_Pin_9
//#define LED4PORT GPIOA

// aux leds
// set zero to disable (0 - 2)
#define AUX_LED_NUMBER 1

#define AUX_LED1PIN GPIO_Pin_9
#define AUX_LED1PORT GPIOA

//#define AUX_LED2PIN GPIO_Pin_x
//#define AUX_LED2PORT GPIOx

// invert - leds turn on when high
//#define LED1_INVERT
//#define LED2_INVERT
//#define LED3_INVERT
//#define LED4_INVERT
//#define AUX_LED1_INVERT
//#define AUX_LED2_INVERT

// softi2c pins definitons:
// sda - out/in , sck - out

// disable softi2c pins 
//#define DISABLE_SOFTI2C_PINS

// I2C speed: fast = no delays 
// slow1 = for i2c without pull-up resistors
// slow2 = i2c failsafe speed
#define SOFTI2C_SPEED_FAST
//#define SOFTI2C_SPEED_SLOW1
//#define SOFTI2C_SPEED_SLOW2

#define SOFTI2C_SDAPIN GPIO_Pin_7
#define SOFTI2C_SDAPORT GPIOB

#define SOFTI2C_SCLPIN GPIO_Pin_6
#define SOFTI2C_SCLPORT GPIOB

#define SOFTI2C_GYRO_ADDRESS 0x68
//#define SOFTI2C_GYRO_ADDRESS 0x69

// disable the check for known gyro that causes the 4 times flash
//#define DISABLE_GYRO_CHECK

// gyro ids for the gyro check
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x78
#define GYRO_ID_3 0x7D
#define GYRO_ID_4 0x68

// Analog battery input pin and adc channel

#define BATTERYPIN GPIO_Pin_1
#define BATTERYPORT GPIOB
#define BATTERY_ADC_CHANNEL ADC_Channel_9


// SPI PINS DEFINITONS ( for radio ic )
// MOSI , CLK , SS - outputs , MISO input

//disable pins so they don't interfere with other pins 
//#define DISABLE_SPI_PINS

#define SPI_MOSI_PIN GPIO_Pin_3
#define SPI_MOSI_PORT GPIOB

#define SPI_MISO_PIN GPIO_Pin_15
#define SPI_MISO_PORT GPIOA

#define SPI_CLK_PIN GPIO_Pin_4
#define SPI_CLK_PORT GPIOB

#define SPI_SS_PIN GPIO_Pin_5
#define SPI_SS_PORT GPIOB

// check for radio chip ( 3 times flash = not found)
#define RADIO_CHECK

// PWM PINS DEFINITIONS 
// currently pins PA0 to PA3 , PA5 , PA8 to PA11 supported

// pwm driver = brushed motors
// esc driver = servo type signal for brushless esc

#define USE_PWM_DRIVER
//#define USE_ESC_DRIVER

// pwm pins disable
// disable all pwm pins / function
//#define DISABLE_PWM_PINS

// pwm pin initialization
// enable the pwm pins to be used here ( multiple pins ok)
#define PWM_PA0
#define PWM_PA1
#define PWM_PA2
#define PWM_PA3
//#define PWM_PA4
//#define PWM_PA5
//#define PWM_PA6
#define PWM_PA7
//#define PWM_PA8
//#define PWM_PA9
#define PWM_PA10
#define PWM_PA11
#define PWM_PB0
//#define PWM_PB1


// Assingment of pin to motor
// Assign one pin to one motor

// back-left motor
// motor 0 pin
// marked M2 on CG027

//#define MOTOR0_PIN_PA0
//#define MOTOR0_PIN_PA1
//*clock#define MOTOR0_PIN_PA2
#define MOTOR0_PIN_PA3
//#define MOTOR0_PIN_PA4
//#define MOTOR0_PIN_PA5
//#define MOTOR0_PIN_PA6
//#define MOTOR0_PIN_PA7
//#define MOTOR0_PIN_PA8
//#define MOTOR0_PIN_PA9
//#define MOTOR0_PIN_PA10
//#define MOTOR0_PIN_PA11
//#define MOTOR0_PIN_PB0
//#define MOTOR0_PIN_PB1

// front-left motor
// motor 1 pin
// marked M1 on CG027

#define MOTOR1_PIN_PA0
//*anti#define MOTOR1_PIN_PA1
//#define MOTOR1_PIN_PA2
//#define MOTOR1_PIN_PA3
//#define MOTOR1_PIN_PA4
//#define MOTOR1_PIN_PA5
//#define MOTOR1_PIN_PA6
//#define MOTOR1_PIN_PA7
//#define MOTOR1_PIN_PA8
//#define MOTOR1_PIN_PA9
//#define MOTOR1_PIN_PA10
//#define MOTOR1_PIN_PA11
//#define MOTOR1_PIN_PB0
//#define MOTOR1_PIN_PB1

// back-right motor
// motor 2 pin
// marked M4 on CG027

//#define MOTOR2_PIN_PA0
//#define MOTOR2_PIN_PA1
//#define MOTOR2_PIN_PA2
//#define MOTOR2_PIN_PA3
//#define MOTOR2_PIN_PA4
//#define MOTOR2_PIN_PA5
//#define MOTOR2_PIN_PA6
#define MOTOR2_PIN_PA7
//#define MOTOR2_PIN_PA8
//#define MOTOR2_PIN_PA9
//#define MOTOR2_PIN_PA10
//#define MOTOR2_PIN_PA11
//*anti#define MOTOR2_PIN_PB0
//#define MOTOR2_PIN_PB1

// front-right motor
// motor 3 pin
// marked M3 on CGO27

//#define MOTOR3_PIN_PA0
//#define MOTOR3_PIN_PA1
//#define MOTOR3_PIN_PA2
//#define MOTOR3_PIN_PA3
//#define MOTOR3_PIN_PA4
//#define MOTOR3_PIN_PA5
//#define MOTOR3_PIN_PA6
//#define MOTOR3_PIN_PA7
//#define MOTOR3_PIN_PA8
//#define MOTOR3_PIN_PA9
#define MOTOR3_PIN_PA10
//*clock#define MOTOR3_PIN_PA11
//#define MOTOR3_PIN_PB0
//#define MOTOR3_PIN_PB1


// gyro orientation
// the expected orientation is with the dot in the front-left corner
// use this to rotate to the correct orientation 
//#define SENSOR_ROTATE_90_CW
//#define SENSOR_ROTATE_90_CCW
//#define SENSOR_ROTATE_180
