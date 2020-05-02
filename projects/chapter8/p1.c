#include <stdio.h>
#include <stdbool.h>

// Enter a number: 939577
// Repeated digit(s): 7 9

int main(void) {
    //使用初始化式来初始化数组，且初始化式的长度小于数组的长度
    bool digit_seen[10] = {false};
    int digit_repeated[10] = {0};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n%10;
        if (digit_seen[digit]) {
            digit_repeated[digit]++;
        }else {
            digit_seen[digit] = true;
        }
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (i=0;i<10;i++) {
        if (digit_repeated[i] > 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}