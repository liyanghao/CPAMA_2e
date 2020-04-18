#include <stdio.h>

int main(void) 
{
	int three_digit;
	int a1, a2, a3;

	printf("Enter a three-digit number: ");
	scanf("%d", &three_digit);

	a1 = three_digit / 100;
	a2 = (three_digit - a1 * 100)/10;
	a3 = three_digit - a1 * 100 - a2 * 10;


	printf("The reverse is: %d%d%d\n", a3, a2, a1);

	return 0;
}