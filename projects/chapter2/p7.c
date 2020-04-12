#include <stdio.h>

int main()
{

	int amount, num_20, num_10, num_5, num_1;
	int res_20, res_10, res_5;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	num_20 = amount / 20;
	printf("$20 bills: %d\n", num_20);

	res_20 = amount - num_20 * 20;
	num_10 = res_20 / 10;
	printf("$10 bills: %d\n", num_10);

	res_10 = res_20 - num_10 * 10;
	num_5 = res_10 / 5;
	printf("$5 bills: %d\n", num_5);

	res_5 = res_10 - num_5 * 5;
	num_1 = res_5;
	printf("$1 bills: %d\n", num_1);


    return 0;
}
