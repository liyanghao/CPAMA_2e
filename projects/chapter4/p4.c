#include <stdio.h>

int main(void) 
{
	int a;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &a);

	int q1 = a / 8;
	int r1 = a % 8;

	int q2 = q1 / 8;
	int r2 = q1 % 8;

	int q3 = q2 / 8;
	int r3 = q2 % 8;

	int q4 = q3 / 8;
	int r4 = q3 % 8;

	int q5 = q4 / 8;
	int r5 = q5 % 8;

	printf("In octal, your number is: %d%d%d%d%d\n", r5, r4, r3, r2, r1);





	return 0;
}