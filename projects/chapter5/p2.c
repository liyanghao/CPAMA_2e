#include <stdio.h>

int main(void)
{
	int hour_24, minute_24;
	int hour_12;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hour_24, &minute_24);

	if (hour_24 > 12) {
		hour_12 = hour_24 -12;
		printf("Equivalent 12-hour time: %d:%d PM\n", hour_12, minute_24);
	}else {
		hour_12 = hour_24;
		printf("Equivalent 12-hour time: %d:%d AM\n", hour_12, minute_24);

	}

	return 0;
}
