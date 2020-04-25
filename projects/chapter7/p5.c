#include <stdio.h>
#include <ctype.h>

// Enter a word: pitfall
// Scrable value is 12

int main(void)
{

    char ch;
    int sum;

    printf("Enter a word: ");
    sum = 0;
    while ((ch = getchar()) != '\n') {
        if ('a' <= ch && ch <= 'z') {
            ch = toupper(ch);
        }
        switch(ch){
                case 'A':
                case 'E':
                case 'I':
                case 'L':
                case 'O':
                case 'R':
                case 'S':
                case 'T':
                case 'U':
                    sum += 1;
                    break;
                case 'D':
                case 'G':
                    sum += 2;
                    break;
                case 'B':
                case 'C':
                case 'M':
                case 'P':
                    sum += 3;
                    break;
                case 'F':
                case 'H':
                case 'V':
                case 'W':
                case 'Y':
                    sum += 4;
                    break;
                case 'K':
                    sum += 5;
                    break;
                case 'J':
                case 'X':
                    sum += 8;
                    break;
                case 'Q':
                case 'Z':
                    sum += 10;
                    break;

        }
    }
    printf("Scrable value is %d\n", sum);

    return 0;
}