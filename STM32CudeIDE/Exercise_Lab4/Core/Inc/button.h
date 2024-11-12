/*
 * button.h
 *
 *  Created on: Nov 9, 2024
 *      Author: Nguyen Quoc Kiet
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_
#include "main.h"

void button_reading (void);
unsigned char is_button_pressed(unsigned char index);
int is_button_pressed_1s(uint8_t index);

#endif /* INC_BUTTON_H_ */
