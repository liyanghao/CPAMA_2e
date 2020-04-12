#include <stdio.h>

int main()
{
	float loan, interest_rate, monthly_pay;
	float balance;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	balance = loan;

	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	interest_rate /= 100;
	interest_rate /= 12;

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_pay);

	balance = (balance - monthly_pay) + balance * (interest_rate);
	printf("Balance remaining after first payment: $%.2f\n", balance);

	balance = (balance - monthly_pay) + balance * (interest_rate);
	printf("Balance remaining after second payment: $%.2f\n", balance);

	balance = (balance - monthly_pay) + balance * (interest_rate);
	printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}
