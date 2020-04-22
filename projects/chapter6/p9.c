#include <stdio.h>

// Enter amount of loan: 20000
// Enter interest rate: 6
// Enter monthly payment: 386.66
// Enter the number of payments: 3
// Balance remaining after 1th payment: $19713.34
// Balance remaining after 2th payment: $19425.25
// Balance remaining after 3th payment: $19135.71

int main()
{
	float loan, interest_rate, monthly_pay;
	float balance;
	int payments_num;
	int i;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	balance = loan;

	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	interest_rate /= 100;
	interest_rate /= 12;

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_pay);

	printf("Enter the number of payments: ");
	scanf("%d", &payments_num);

	for (i=0; i<payments_num; i++) {
		balance = (balance - monthly_pay) + balance * (interest_rate);
		printf("Balance remaining after %dth payment: $%.2f\n", i+1, balance);
	}

    return 0;
}
