#include <stdio.h>

int main(void)
{

	int country, part1, part2;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d)%d-%d", &country, &part1, &part2);

	printf("You entered %d.%d.%d\n", country, part1, part2);

	return 0;
}