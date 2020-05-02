#include <stdio.h>
#include <stdbool.h>

// Enter a number: 41270192
// Digit:      0   1   2   3   4   5   6   7   8   9   
// Occurrences: 1  2   2   0   1   0   0   1   0   1   

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
            digit_repeated[digit] = 1;
        }
        n /= 10;
    }

    printf("Digit:      ");
    for (i=0;i<10;i++) {
        printf("%d\t", i);
    }
    printf("\n");


    printf("Occurrences: ");
    for (i=0;i<10;i++) {
        printf("%d\t", digit_repeated[i]);
    }
    printf("\n");
}