/*
 * ultra.h
 *
 *  Created on: Oct 13, 2022
 *      Author: felob
 */

#ifndef ULTRA_H_
#define ULTRA_H_
# include"std_types.h"


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*function Description:
➢ Initialize the ICU driver as required.
➢ Setup the ICU call back function.
➢ Setup the direction for the trigger pin as output pin through the
GPIO driver.*/
void Ultrasonic_init(void);


/*function Description:
➢ Send the Trigger pulse to the ultrasonic..*/
void Ultrasonic_Trigger(void);


/*function Description:
➢ Send the trigger pulse by using Ultrasonic_Trigger function.
➢ Start the measurements by the ICU from this moment.
*/
uint16 Ultrasonic_readDistance(void);




/*function Description:
This is the call back function called by the ICU driver.
➢ This is used to calculate the high time (pulse time) generated by
the ultrasonic sensor.
*/
void Ultrasonic_edgeProcessing(void);



#endif /* ULTRA_H_ */