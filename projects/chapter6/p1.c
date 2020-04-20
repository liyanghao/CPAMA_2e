#include <stdio.h>
// Enter a number: 60
// Enter a number: 38.3
// Enter a number: 4.89
// Enter a number: 100.62
// Enter a number: 75.2295
// Enter a number: 0
// The largest number entered was: 100.62

int main(void){

	float max, number;

	printf("Enter a number: ");
	scanf("%f", &number);

	max = number;
	while (number > 0) {
		if (number > max){
			max = number;
		}
		printf("Enter a number: ");
		scanf("%f", &number);
	}

	printf("The largest number entered was: %.2f\n", max);
	return 0;
}