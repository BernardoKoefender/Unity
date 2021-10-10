//This code is based on the example "foo".
//Authors:
//  Bernardo Koefender            - @BernardoKoefender
//  Frederico Arnaldo Ballve Neto - @fredballve
//  Willian Analdo Nunes          - @Willian-Nunes

#include <stdio.h>
#include <math.h>

#include "payment.h"

int payment(float value, char status[15])
{
	// ---- Testing "value" ---- //
	// Here we separete the float part from the int part
	//double int_part, dec_part;
	//dec_part = modf(value, &int_part);

	//char str_value[32];
	//sprintf(str_value, "%f", value);

	printf("%f\n", value);
	//printf("%s\n", str_value);

	//int int_part;
	//float dec_part;
	//
	//int_part = (int)value;
	//dec_part = ((int)(value*100)%100);
	//float new_val = int_part*1.0f + (dec_part/100.0f);

	//int int_part = (int)value;
	//float float_part = (value - (float)int_part) * 100;

	//float test = value % 10;

	//printf("%d\n", int_part);
	//printf("%f\n", dec_part);
	//printf("%f\n", new_val);
	//printf("%lf\n", dec_part);


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
		float v = 500.10;
		char s[] = "VIP";
		int r;
		r = payment(v, s);
		printf("Returned %d\n", r);
		return 0;
	}
#endif