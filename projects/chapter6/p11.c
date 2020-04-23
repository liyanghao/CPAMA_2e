#include <stdio.h>

// Enter a number: 4
// The approximate value of the mathematical constant e is 2.71

int main(void)
{

	int n, result;
	int i, j;
	float e;

	printf("Enter a number: ");
	scanf("%d", &n);

	e = 1.0f;
	for (i = 1; i<=n; i++) {
		int result = 1;
		for (j=i;j>0;j--) {
			result *= j;
		}
		e += 1.0f/result;

	}

	printf("The approximate value of the mathematical constant e is %.2f\n", e);
    return 0;
}