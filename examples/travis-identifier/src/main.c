#include "identifier.c"

#include <stdio.h>

int main(int argc, char **argv)
{
	int ret_val;
	if (argc == 1)
	{
		ret_val = identifier("Teste1");
		//printf("Retornou: %d\n", ret_val);
		return ret_val;
	}
	else if(argc == 2)
	{
		ret_val = identifier(argv[1]);
		//printf("Retornou: %d\n", ret_val);
		return ret_val;
	}
	else
	{
		//rintf("Error: too many arguments.\n");
		return 0;
	}

}