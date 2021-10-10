//This code is based on the example "foo".
//Authors:
//  Bernardo Koefender            - @BernardoKoefender
//  Frederico Arnaldo Ballve Neto - @fredballve
//  Willian Analdo Nunes          - @Willian-Nunes

#include <stdio.h>

#include "payment.h"

int payment(float value, char status[15])
{
	// ---- Testing "value" ---- //
	// Here we separete the float part from the int part
	int int_part = (int)value;
	float float_part = (value - int_part) * 100;

	//float test = value % 10;

	printf("%f\n", float_part);


	//printf("%d / %f\n", int_part, float_part);
	//  Since the float part is actually the cents, it must not have more than 2 digits,
	//otherwise, we return error code 1.

	// doing this mathematically presents rounding errors. 
	// maybe its easier if we convert value to a string.
	//float cents_check = float_part - (int)float_part;
	//if(cents_check != 0.0)
	//{
	//	return 1;
	//}




	// ---- Testing "status" ---- //


	return 0;
}


#define THISMAIN
#ifdef THISMAIN
	int main(void)
	{
		float v = 99.432;
		char s[] = "VIP";
		int r;
		r = payment(v, s);
		printf("Returned %d\n", r);
		return 0;
	}
#endif