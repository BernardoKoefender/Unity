#include "identifier.c"

#include <stdio.h>

int main(int argc, char **argv)
{
	int ret_val;
	if (argc == 1)
	{
		ret_val = identifier("Teste1");
		return ret_val;
	}
	else if(argc == 2)
	{
		ret_val = identifier(argv[1]);
		return ret_val;
	}
	else
	{
		return 0;
	}

}