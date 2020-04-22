#include <stdio.h>

// Enter a date (mm/dd/yy): 3/6/08
// Enter a date (mm/dd/yy): 5/17/07
// Enter a date (mm/dd/yy): 6/3/07
// Enter a date (mm/dd/yy): 0/0/0
// 5/17/07 is the earliest date

int main(void)
{
	int month, day, year;

	int min_month, min_day, min_year; 

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	min_month = month;
	min_day = day;
	min_year = year;

	while (year > 0 || month > 0 || day > 0) {
		if (year < min_year) {
			min_year = year;
			min_month = month;
			min_day = day;
		}else if (year == min_year) {
			if (month < min_month) {
				min_year = year;
				min_month = month;
				min_day = day;
			}else if (min_month == month) {
				if (day < min_day) {
					min_year = year;
					min_month = month;
					min_day = day;
				}
			}
		}
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		
	}

	printf("%d/%d/%.2d is the earliest date\n", min_month, min_day, min_year);	


    return 0;
}