#include "../includes/bitwise.h" 

int main()
{
	unsigned char byte;
	int num;

	printf("Enter a number <= 255 to print its binary: ");
	scanf("%hhu", &byte);
	print_bits(byte);
	//print_bits_flashy(byte);
	printf("Enter an integer to check its msb: ");
	scanf("%d", &num);
	check_msb(num);
}
