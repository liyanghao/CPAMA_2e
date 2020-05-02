#include <stdio.h>
#include <stdbool.h>

// Enter a serial of numbers: 123321 456 0
// 123321 has repeated digit
// 456 has no repeated digit

int main(void) {
    long n;

    printf("Enter a serial of numbers: ");
    scanf("%ld", &n);

    while(n > 0){
        int digit;
        long cur;
        bool digit_seen[10] = {false};

        cur = n;
        while (cur>0) {
            digit = cur%10;
            if (digit_seen[digit]) {
                break;
            }
            digit_seen[digit] = true;
            cur /= 10;
        }
        if (cur > 0) {
            printf("%ld has repeated digit\n", n);
        }else {
            printf("%ld has no repeated digit\n", n);
        }
        scanf("%ld", &n);
    }

    return 0;
}