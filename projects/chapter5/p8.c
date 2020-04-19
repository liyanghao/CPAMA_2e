#include <stdio.h>


int main(void)
{

	int hour, minute;
	int total_minutes;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	total_minutes = hour * 60 + minute;

	if (total_minutes <= (8 * 60)) {
		printf("Closet departure time is 8:00 am., arraving at 10:16 am.\n");
	}else if (total_minutes <= (9 * 60 + 43)) {
		int diff1 = total_minutes - (8 * 60);
		int diff2 = (9 * 60 + 43) - total_minutes;
		if (diff1 > diff2) {
			printf("Closet departure time is 9:43 am., arraving at 11:52 am.\n");
		}else {
			printf("Closet departure time is 8:00 am., arraving at 10:16 am.\n");			
		}
	}else if (total_minutes <= (11 * 60 + 19)) {
		int diff1 = total_minutes - (9 * 60 + 43);
		int diff2 = (11 * 60 + 19) - total_minutes;
		if (diff1 > diff2) {
			printf("Closet departure time is 11:19 am., arraving at 1:31 pm.\n");
		}else {
			printf("Closet departure time is 9:43 am., arraving at 11:52 am.\n");			
		}
	}else if (total_minutes <= (12 * 60 + 47)) {
		int diff1 = total_minutes - (11 * 60 + 19);
		int diff2 = (12 * 60 + 47) - total_minutes;
		if (diff1 > diff2) {
			printf("Closet departure time is 12:47 pm., arraving at 3:00 pm.\n");
		}else {
			printf("Closet departure time is 11:19 am., arraving at 1:31 pm.\n");			
		}
	}else if (total_minutes <= (14 * 60)) {
		int diff1 = total_minutes - (12 * 60 + 47);
		int diff2 = (14 * 60) - total_minutes;
		if (diff1 > diff2) {
			printf("Closet departure time is 2:00 pm., arraving at 4:08 pm.\n");
		}else {
			printf("Closet departure time is 12:47 pm., arraving at 3:00 pm.\n");			
		}
	}else if (total_minutes <= (15 * 60 + 45)) {
		int diff1 = total_minutes - (14 * 60);
		int diff2 = (15 * 60 + 45) - total_minutes;
		if (diff1 > diff2) {
			printf("Closet departure time is 3:45 pm., arraving at 5:55 pm.\n");
		}else {
			printf("Closet departure time is 2:00 pm., arraving at 4:08 pm.\n");			
		}
	}else if (total_minutes <= (19 * 60)) {
		int diff1 = total_minutes - (15 * 60 + 45);
		int diff2 = (19 * 60) - total_minutes;
		if (diff1 > diff2) {
			printf("Closet departure time is 7:00 pm., arraving at 9:20 pm.\n");
		}else {
			printf("Closet departure time is 3:45 pm., arraving at 5:55 pm.\n");			
		}
	}else if (total_minutes <= (21 * 60 + 45)) {
		int diff1 = total_minutes - (19 * 60);
		int diff2 = (21 * 60 + 45) - total_minutes;
		if (diff1 > diff2) {
			printf("Closet departure time is 9:45 pm., arraving at 11:58 pm.\n");
		}else {
			printf("Closet departure time is 7:00 pm., arraving at 9:20 pm.\n");			
		}
	}
    return 0;
}