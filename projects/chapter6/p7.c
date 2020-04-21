#include <stdio.h>
// This program prints a table of squares.
// Enter number of entries in table: 10
//          1         1
//          2         4
//          3         9
//          4        16
//          5        25
//          6        36
//          7        49
//          8        64
//          9        81
//         10       100

int main(void)
{
    int i, n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    odd = 3;
    square = 1;
    for (i = 1; i <= n; i++) {
    	printf("%10d%10d\n", i, square);
    	square += odd;
    	odd += 2;
    }

    return 0;
}