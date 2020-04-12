#include <stdio.h>

#define RATIO 0.05f

int main()
{
	float amount, total;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	total = amount * (1+RATIO);

	printf("With tax added: $%.2f\n", total);

    return 0;
}
