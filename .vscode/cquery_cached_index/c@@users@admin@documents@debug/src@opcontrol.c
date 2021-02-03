

#include "main.h"




void operatorControl() {

  int limit = 0;
  int counts = 0;
	while (1) {
	limit =	digitalRead(6);
  counts = encoderGet(shoulderencoder);
    printf("the limit value is %d \n", limit);
    printf("the encoder value is %d \n", counts);
		delay(200);
	 }
 }
