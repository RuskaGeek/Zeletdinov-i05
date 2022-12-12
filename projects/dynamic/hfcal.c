#include <stdio.h>
#include "hfcal.h"

void display_calories(float weight,float distance, float coeff)
{
	printf("Weight: %3.2f pounds\n", weight);
	printf("Distance: %3.2f miles\n", distance);
	printf("Calories loss: %4.2f cal\n", coeff*weight*distance);
}
