#include <stdio.h>
#include <math.h>



int main(void)
{	
	int n,i;
	int result;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	result = 1;
	for (i=n;i>0;i--) {
		result*= i;
	}

	printf("Factoial of %d is %d\n", n, result);

    return 0;
}