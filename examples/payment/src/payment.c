//This code is based on the example "foo".
//Authors:
//  Bernardo Koefender            - @BernardoKoefender
//  Frederico Arnaldo Ballve Neto - @fredballve
//  Willian Analdo Nunes          - @Willian-Nunes

#include <stdio.h>
#include <string.h>
#include "payment.h"


// regular estudante aposentado VIP

// return 0 if OK
// return 1 for value error
// return 2 for status error


int payment(float value, char status[15])
{

	//  How do we check if value has more than 2 digits
	//on the decimal part(ex: 50.555) considering that
	//floating point errors can comprimise this?
	//	For example: If you run payment(99.42, "VIP"), 
	//"value" is changed to 99.419998 in the function.

	if(value < 0.01f)
	{
		return 1;
	}
	else if(value > 99999.00f)
	{
		return 1;
	}
	
	//TEST_ASSERT_EQUAL(2, payment(150.34, NULL))
	// prevents segmentation fault for empty(null) pointers
	if(status == NULL)
	{
		return 2;
	}
	else
	{
		// If status is too long there is no point continuing
		if(strlen(status) <= 10)
		{
			if (strcmp("regular", status) == 0)
			{
				return 0;
			}
			else if (strcmp("estudante", status) == 0)
			{
				return 0;
			}
			else if (strcmp("aposentado", status) == 0)
			{
				return 0;
			}
			else if (strcmp("VIP", status) == 0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
		}
		else
		{
			return 2;
		}
	}

	return 0;

}


//#define THISMAIN
#ifdef THISMAIN
	int main(void)
	{
		float v = 99.42;
		char s[] = "VIP";
		int r;
		r = payment(v, NULL);
		printf("Returned %d\n", r);
		return 0;
	}
#endif