#include <stdio.h>
// This program prints a talbe of 24 squares.
//          1         1
//          2         4
//          3         9
//          4        16
//          5        25
//          6        36
//          7        49
//          8        64
//          9        81
//         10       100
//         11       121
//         12       144
//         13       169
//         14       196
//         15       225
//         16       256
//         17       289
//         18       324
//         19       361
//         20       400
//         21       441
//         22       484
//         23       529
//         24       576
// Press Enter to continue...
// This program prints a talbe of 24 squares.
//          1         1
//          2         4
//          3         9
//          4        16
//          5        25
//          6        36
//          7        49
//          8        64
//          9        81
//         10       100
//         11       121
//         12       144
//         13       169
//         14       196
//         15       225
//         16       256
//         17       289
//         18       324
//         19       361
//         20       400
//         21       441
//         22       484
//         23       529
//         24       576
// Press Enter to continue...o

int main(void){

    int i;

    do{
        printf("This program prints a talbe of 24 squares.\n");
        for (i=1; i<=24; i++){
            printf("%10d%10d\n", i, i*i);
        }
        printf("Press Enter to continue...");

    }while (getchar() == '\n');

    return 0;
}