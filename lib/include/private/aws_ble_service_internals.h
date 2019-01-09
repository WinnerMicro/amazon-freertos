/*
 * Amazon FreeRTOS
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
 * @file aws_ble_service_internals.h
 * @brief Header file defines the internal variables used by the BLE services.
 */
#ifndef _AWS_BLE_SERVICES_INTERNAL_H_
#define _AWS_BLE_SERVICES_INTERNAL_H_

#include "aws_ble_config.h"
#include "aws_iot_serializer.h"

#if ( bleConfigENABLE_CBOR_SERIALIZATION == 1 )

#define bleMESSAGE_ENCODER  ( _AwsIotSerializerCborEncoder )
#define bleMESSAGE_DECODER  ( _AwsIotSerializerCborDecoder )

#elif ( bleConfigENABLE_JSON_SERIALIZATION == 1 )

#define bleMESSAGE_ENCODER  ( _AwsIotSerializerJsonEncoder )
#define bleMESSAGE_DECODER  ( _AwsIotSerializerJsonDecoder )

#endif


#endif /* _AWS_BLE_SERVICES_INTERNAL_H_ */
