#include "../includes/bitwise.h"

void check_msb(int num)
{
	int msb;

	msb = 1 << (sizeof(int) * 8 - 1);

	(num & msb) ? printf("msb is set\n") : printf("msb is not set\n");
}
