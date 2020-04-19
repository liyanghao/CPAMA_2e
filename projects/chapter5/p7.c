#include <stdio.h>


int main(void)
{
    int a, b, c, d;
    int max;
    int min;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    max = a;
    min = a;
    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    if (d > max) {
        d = max;
    }

    printf("Largest: %d\n",  max);

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }

    printf("Smallest: %d\n",  min);


    return 0;
}