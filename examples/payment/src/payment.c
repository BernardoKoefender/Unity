//This code is based on the example "foo".
//Authors:
//  Bernardo Koefender            - @BernardoKoefender
//  Frederico Arnaldo Ballve Neto - @fredballve
//  Willian Analdo Nunes          - @Willian-Nunes

#include <stdio.h>

#include "payment.h"

int payment(float value, char status[15]){
	return 0;
}


//#define THISMAIN
#ifdef THISMAIN
	int main(void)
	{
		float v = 99.99;
		char s[] = "VIP";
		int r;
		r = payment(v, s);
		printf("Returned %d\n", r);
		return 0;
	}
#endif