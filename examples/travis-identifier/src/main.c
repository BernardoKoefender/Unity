#include "identifier.c"

#include <stdio.h>

int main(int argc, char **argv) {

	int buf[10] = {0,1,2,3,4,5,6,7,8,9};
	int result = 0;
	int i;

	for(i = 0; i <= 9; i++)
	{
		result += buf[i];
	}

	printf("%d\n",result);


	int ret_val;
	if (argc == 1)
	{
		ret_val = identifier("Teste1");
		printf("Retornou: %d\n", ret_val);
		return ret_val;
	}
	else if(argc == 2)
	{
		ret_val = identifier(argv[1]);
		printf("Retornou: %d\n", ret_val);
		return ret_val;
	}
	else
	{
		printf("Error: too many arguments.\n");
		return 0;
	}

}