/*
 * Amazon FreeRTOS V1.4.2
 * Copyright (C) 2018 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/**
 * @file iot_ble_config.h
 * @brief BLE configuration overrides for ESP32 board.
 */


#ifndef _IOT_BLE_CONFIG_H_
#define _IOT_BLE_CONFIG_H_

/* Device name for this peripheral device. */
#define IOT_BLE_DEVICE_NAME                     "ESP32_TEST"

/* Enable WIFI provisioning GATT service. */
#define IOT_BLE_ENABLE_WIFI_PROVISIONING         ( 0 )
#define IOT_BLE_ENABLE_GATT_DEMO                 ( 0 )

/* Disable numeric comparison */
#define IOT_BLE_ENABLE_NUMERIC_COMPARISON        ( 0 )
#define IOT_BLE_ENABLE_SECURE_CONNECTION         ( 0 )
#define IOT_BLE_INPUT_OUTPUT                     ( eBTIONone )

#define IOT_BLE_ENCRYPTION_REQUIRED               ( 0 )

#define AWSIOT_NETWORK_TYPE_NONE     0x00000000
#define AWSIOT_NETWORK_TYPE_WIFI     0x00000001
#define AWSIOT_NETWORK_TYPE_BLE      0x00000002

#define IO

/* Include BLE default config at bottom to set the default values for the configurations which are not overridden */
#include "iot_ble_config_defaults.h"

#endif /* _IOT_BLE_CONFIG_H_ */
