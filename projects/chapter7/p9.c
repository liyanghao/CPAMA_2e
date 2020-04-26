#include <stdio.h>
#include <ctype.h>
        
// Enter a 12-hour time: 9:11 PM
// Equiverlent 24-hour time: 21:11

int main(void)
{

	int hour, minute;
	char indicator;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hour, &minute);
    scanf(" %c", &indicator);

    indicator = toupper(indicator);
	if (indicator == 'P') {
		hour += 12;
	}

	printf("Equiverlent 24-hour time: %d:%d\n", hour, minute);
    return 0;
}