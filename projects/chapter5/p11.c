#include <stdio.h>


int main(void)
{
	int number, first, second;

	printf("Enter a two-digit number: ");
	scanf("%2d", &number);

	first = number / 10;
	second = number - first * 10;

	printf("You entered the number ");
	switch (first) {
		case 9:
			printf("ninty");
			break;
		case 8:
			printf("eighty");
			break;
		case 7:
			printf("seventy");
			break;
		case 6:
			printf("sixty");
			break;
		case 5:
			printf("fifty");
			break;
		case 4:
			printf("forty");
			break;
		case 3:
			printf("thirty");
			break;
		case 2:
			printf("twenty");
			break;
	}
	switch (second) {
		case 9:
			printf("-nine\n");
			break;
		case 8:
			printf("-eight\n");
			break;
		case 7:
			printf("-sevenn\n");
			break;
		case 6:
			printf("-six\n");
			break;
		case 5:
			printf("-five\n");
			break;
		case 4:
			printf("-four\n");
			break;
		case 3:
			printf("-three\n");
			break;
		case 2:
			printf("-two\n");
			break;
		case 1:
			printf("-one\n");
			break;
		default :
			break;
	}

    return 0;
}