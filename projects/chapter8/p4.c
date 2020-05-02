/** Reverse a series of numbers */

#include <stdio.h>

#define LEN (int)(sizeof(a)/sizeof(a[0]))
#define N 10

// Enter 10 numbers: 1 2 3 4 5 6 67 8 9 10
// In reverse order:
//  10
//  9
//  8
//  67
//  6
//  5
//  4
//  3
//  2
//  1

int main(void) {
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i =0; i<LEN; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:\n");
    for (i = LEN-1; i >= 0; i--)
    {
        printf(" %d\n", a[i]);
    }

    return 0;
}