#include <stdio.h>
// Enter a fraction: 6/12
// In lowest form: 1/2
int main(void){

	int numerator, denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	int m = numerator;
	int n = denominator;

	if (n > m) {
		int temp = n;
		n = m;
		m = temp;
	}

	int gcd = m;
	while (n != 0) {
		int remainder = m % n;
		m = n;
		n = remainder;
		gcd = m;
	}

	printf("In lowest form: %d/%d\n", numerator/gcd, denominator/gcd);

	return 0;
}