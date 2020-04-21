#include <stdio.h>
// Enter a number: 123456
// The reverse is: 654321
int main(void) 
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	printf("The reverse is: ");
	do{
		int m = number/10;
		int n = number - m * 10;
		printf("%d", n);
		number /= 10;
	}while(number != 0);
	printf("\n");

	return 0;
}