/*
 * Control.h
 *
 *  Created on: Jan 15, 2022
 *      Author: szymo
 */
#include "main.h"
#include "main.h"
#include "i2c.h"
#include "tim.h"
#include "usart.h"
#include "usb_otg.h"
#include "gpio.h"
#ifndef INC_CONTROL_H_
#define INC_CONTROL_H_

struct PID{
	float Kp;
	float Ki;
	float Td;
	float N;
	float prev_int;
	float prev_error;
	float prev_d;
	float Tp;
};
void PID_regulator(struct PID pid);
void step(uint8_t duty);

#endif /* INC_CONTROL_H_ */