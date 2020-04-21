#include <stdio.h>

// Enter a number: 100
// 4
// 16
// 36
// 64
// 100
int main(void) 
{
	int number;
	int i, j;

	printf("Enter a number: ");
	scanf("%d", &number);

	for (i = 2; i <=number; i += 2) {
		for(j = 1 ; j <= i; j++){
			if(j * j == i) {
				printf("%d\n", i);
				break;
			}
		}
	}

	return 0;
}