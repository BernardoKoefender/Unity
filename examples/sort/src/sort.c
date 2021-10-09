//This code is based on the example "foo".
//Authors:
//  Bernardo Koefender            - @BernardoKoefender
//  Frederico Arnaldo Ballve Neto - @fredballve
//  Willian Analdo nunes          - @Willian-Nunes

#include <stdlib.h>
#include <stdio.h>

#include "sort.h"

//  This function was copied from:
//	https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}

// Since the specification of this funcion demands no return(void),
//we are limited to test only the contents of the pointer "*v".
void sort(int *v, int s)
{
	qsort(v, s, sizeof(int), cmpfunc);
}

//#define THISMAIN
#ifdef THISMAIN
	int main(void)
	{
		int i;
		int size = 5;
		int vec[] = {1, 3, 2, 4, 5};
		sort(vec, size);
	
		printf("Vec:\n");
		for(i = 0; i < size; i ++)
		{
			printf("%d\n",vec[i]);
		}
	
		return 0;
	}
#endif