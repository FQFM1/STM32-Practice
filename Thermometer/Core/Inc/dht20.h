/*
 * dht20.h
 *
 *  Created on: Nov 21, 2024
 *      Author: lizha
 */

// 防止头文件被多次引用后产生重复定义问题
#ifndef INC_DHT20_H_
#define INC_DHT20_H_

#include "i2c.h"

void DHT20_Init();											// Initialize DTH20
void DHT20_Read(float* Temperature, float* Humidity);		// Read current temperature and humidity(common mode)
void DHT20_Measure();										// Send 0xAC command(IT mode)
void DHT20_Get();											// Receive temperature and humidity data from DHT20(IT mode)
void DHT20_Analysis(float* Temperature, float* Humidity);	// Convert BIN data to DEC data(IT mode)
uint8_t STATUS_Read();										// Read DHT20 status

#endif /* INC_DHT20_H_ */
