#include <stdio.h>

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