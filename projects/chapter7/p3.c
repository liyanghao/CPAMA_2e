#include <stdio.h>

// This program sums a serial of doubles.
// Enter integers (0 to terminate): 12 14 16 0
// The sum is : 42.000000


int main(void)
{
    double n, sum = 0;

    printf("This program sums a serial of doubles.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%lf", &n);
    while(n!=0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is : %f\n", sum);


    return 0;
}