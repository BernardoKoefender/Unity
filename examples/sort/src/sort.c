#include <stdlib.h>
#include <stdio.h>

#include "sort.h"

int cmpfunc (const void * a, const void * b)
{
	//copiado de https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
	return ( *(int*)a - *(int*)b );
}

void sort(int *vec, int s)
{
	qsort(vec, s, sizeof(int), cmpfunc);
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