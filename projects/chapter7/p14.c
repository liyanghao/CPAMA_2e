#include <stdio.h>
#include <math.h>

// Enter a positive number: 3  
// y_old is 1.00000, x/y is 3.00000, average is 2.00000
// y_old is 2.00000, x/y is 1.50000, average is 1.75000
// y_old is 1.75000, x/y is 1.71429, average is 1.73214
// y_old is 1.73214, x/y is 1.73196, average is 1.73205
// y_old is 1.73205, x/y is 1.73205, average is 1.73205
// Square root: 1.73205


int main(void)
{	
	double x, y;
	double mid, y_old;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	y = 1.0;
	y_old = 0.0;

	while (fabs(y-y_old)>=y*0.00001){
		y_old = y;
		mid = x/y;
		y = (mid+y)/2;
		// printf("y_old is %.5f, x/y is %.5f, average is %.5f\n", y_old, mid, y);
	}

	printf("Square root: %.5f\n", y);
    return 0;
}