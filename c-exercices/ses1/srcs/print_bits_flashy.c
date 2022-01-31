#include "../includes/bitwise.h"

void print_bits_flashy(unsigned char byte)
{
	int i;
	
	i = 1 << 7;
	while(i > 0)
	{
		if (byte & i)
			printf("1");
		else
			printf("0");
		i /= 2;
	}
	printf("\n");
}
