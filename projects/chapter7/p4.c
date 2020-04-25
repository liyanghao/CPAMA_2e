#include <stdio.h>
// Enter phone number: CALLATT
// 2255288

// Enter phone number: 1-800-COL-LECT
// 1-800-265-5328

int main(void)
{

    char ch;

    printf("Enter phone number: ");
    ch = getchar();
    while (ch != '\n') {
        if (ch > 'Z' || ch < 'A') {
            putchar(ch);
        }else {
            switch(ch){
                case 'A':
                case 'B':
                case 'C':
                    putchar('2');
                    break;
                case 'D':
                case 'E':
                case 'F':
                    putchar('3');
                    break;
                case 'H':
                case 'I':
                case 'G':
                    putchar('4');
                    break;
                case 'J':
                case 'K':
                case 'L':
                    putchar('5');
                    break;
                case 'M':
                case 'N':
                case 'O':
                    putchar('6');
                    break;
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                    putchar('7');
                    break;
                case 'T':
                case 'U':
                case 'V':
                    putchar('8');
                    break;
                case 'W':
                case 'X':
                case 'Y':
                case 'Z':
                    putchar('9');
                    break;

            }
        }
        ch = getchar();
    }
    printf("\n");


    return 0;
}