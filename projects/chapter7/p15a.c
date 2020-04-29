#include <stdio.h>
#include <math.h>



int main(void)
{	
	short int n,i;
	short int result;

	// printf("Enter a positive integer: ");
	// scanf("%d", &n);
	result = 1;
	while (result > 0) {
		for (i=n;i>0;i--) {
			result*= i;
			if (result < 0) {
				break;
			}
		}
		if (result < 0) {
			break;
		}
		n++;
	}
	
	printf("The largest value of short int number for which the program correctly prints the factorial of n is %hd\n", n);

    return 0;
}