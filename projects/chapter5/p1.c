#include <stdio.h>

int main(void)
{
	int number, digits;

	printf("Enter a number: ");
	scanf("%3d", &number);

	digits = 0;
	if (number >= 0 && number <= 9) {
		digits = 1;
	}else if (number >= 10 && number <= 99) {
		digits = 2;
	}else if (number >= 100 && number <= 999) {
		digits = 3;
	}
	printf("The number %d has %d digits\n", number, digits);

	return 0;
}
