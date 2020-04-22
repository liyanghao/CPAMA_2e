#include <stdio.h>
 //     1  2  3  4  5  6
 //  7  8  9 10 11 12 13
 // 14 15 16 17 18 19 20
 // 21 22 23 24 25 26 27
 // 28 29 30 31          
int main(void)
{
    int days_in_month, start_day_in_week;
    int i;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day_in_week);

    for (i = 1; i < start_day_in_week; i++) {
        printf("   ");
    }

    for (i=1; i<=days_in_month;i++) {
        printf("%3d", i);
        if ((i+start_day_in_week-1) % 7 == 0) {
            printf("\n");
        }

    }

    return 0;
}