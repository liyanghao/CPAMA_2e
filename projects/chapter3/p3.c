#include <stdio.h>

int main(void)
{

	int gs1_prefix, group_identifier, publisher_code;

	int item_num, check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_identifier, &publisher_code, &item_num, &check_digit);

	printf("GS1 prefix: %d\n", gs1_prefix);
	printf("Group identifier: %d\n", group_identifier);
	printf("publisher code: %d\n", publisher_code);
	printf("Item number: %d\n", item_num);
	printf("Check digit: %d\n", check_digit);

	return 0;
}