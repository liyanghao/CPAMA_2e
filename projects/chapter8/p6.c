#include <stdio.h>
#include <ctype.h>
#define LEN 25

// Enter message: Hey dude, C is rilly cool
// In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

int main(void) {

    char org_msg[LEN];
    int i;

    printf("Enter message: ");
    for (i=0;i<LEN;i++){
        org_msg[i] = getchar();
    }

    printf("In B1FF-speak: ");
    for (i=0;i<LEN;i++){
        char cur = toupper(org_msg[i]);
        switch(cur){
            case 'A' :
                printf("%c", '4');
                break;
            case 'B' :
                printf("%c", '8');
                break;
            case 'E' :
                printf("%c", '3');
                break;
            case 'I' :
                printf("%c", '1');
                break;
            case 'O' :
                printf("%c", '0');
                break;
            case 'S' :
                printf("%c", '5');
                break;
            default :
                printf("%c", cur);
                break;
        }
    }

    for (i=0;i<10;i++){
        printf("%c", '!');
    }
    printf("\n");


    return 0;
}