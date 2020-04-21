#include <stdio.h>

int main(void){

	int m, n;
	int gcd;

	printf("Enter two integers: ");
	scanf("%d%d", &m, &n);


	if (n > m) {
		int temp = n;
		n = m;
		m = temp;
	}

	gcd = m;
	while (n != 0) {
		int remainder = m % n;
		m = n;
		n = remainder;
		gcd = m;
	}

	printf("Greatest common divisor: %d\n", gcd);

	return 0;
}