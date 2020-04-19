#include <stdio.h>
// Enter the first (single) digit: 0
// Enter first group of five digits: 13800
// Enter second group of five digits: 15173
// Enter the check digit: 5
// VLAID

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
    first_sum, second_sum, total;

    int check, my_check;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1,&i2,&i3,&i4,&i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1,&j2,&j3,&j4,&j5);
    printf("Enter the check digit: ");
    scanf("%1d", &check);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    my_check = 9 - (total - 1)%10;

    // printf("Check digit: %d\n", my_check);

    if (my_check == check) {
        printf("VLAID\n");
    }else {
        printf("NOT VLAID\n");
    }

    return 0;
}