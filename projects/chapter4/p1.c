#include <stdio.h>

int main(void) 
{
	int two_digit;
	int a1, a2;

	printf("Enter a two-digit number: ");
	scanf("%d", &two_digit);

	a1 = two_digit / 10;
	a2 = two_digit - a1 * 10;

	printf("The reverse is: %d%d\n", a2, a1);

	return 0;
}