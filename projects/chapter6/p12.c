#include <stdio.h>

// Enter a number: 4
// The approximate value of the mathematical constant e is 2.71

int main(void)
{

	int result;
	int i, j;
	float e, error;
	float term;

	printf("Enter the error : ");
	scanf("%f", &error);

	e = 1.0f;
	term = 1.0f;
	i = 1;
	while (term > error) {
		int result = 1;
		for (j=i;j>0;j--) {
			result *= j;
		}
		term = 1.0f/result;
		printf("%.2f\n", term);
		e += term;
		i++;
	}

	printf("The approximate value of the mathematical constant e is %.2f\n", e);
    return 0;
}