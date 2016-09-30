/*            STD Arduino Libs      */
#include <Arduino.h>
#include <Servo.h>
#include <Wire.h>
#include "SPI.h"
#include <WiFi101.h>
#include <Scheduler.h>

/*          Project Additions       */
#include "Button.h"
#include "CompassController.h"
#include "CommandController.h"
#include "SteeringController.h"
#include "config.h"
#include "I2Cdev.h"
#include "MPU6050.h"
#include "ImuController.h"
#include "WifiAccessPoint.h"
#include "I2CWriteAnything.h"
#include "I2CSend.h"

/*     Enum Structs      */
typedef enum {kSteering, kThrottle, kHeading}CommunicationKey;
