#include <stdio.h>

// Enter row 1: 8 3 9 0 10
// Enter row 2: 3 5 17 1 1
// Enter row 3: 2 8 6 23 1
// Enter row 4: 15 7 3 2 9
// Enter row 5: 6 14 2 6 0
// Row totals: 30 27 40 36 28 
// Column totals: 34 37 37 32 21 

int main(void) {
    int a[5][5]={{0}};
    int i,j;
    int row_sum[5]={0}, col_sum[5]={0};

    printf("Enter row 1: ");
    for(j=0;j<5;j++){
        scanf("%d", &a[0][j]);
        row_sum[0] += a[0][j];
        switch(j) {
            case 0:
                col_sum[0] += a[0][0];
                break;
            case 1:
                col_sum[1] += a[0][1];
                break;
            case 2:
                col_sum[2] += a[0][2];
                break;
            case 3:
                col_sum[3] += a[0][3];
                break;
            case 4:
                col_sum[4] += a[0][4];
                break;
        }
    }
    printf("Enter row 2: ");
    for(j=0;j<5;j++){
        scanf("%d", &a[1][j]);
        row_sum[1] += a[1][j];
        switch(j) {
            case 0:
                col_sum[0] += a[1][0];
                break;
            case 1:
                col_sum[1] += a[1][1];
                break;
            case 2:
                col_sum[2] += a[1][2];
                break;
            case 3:
                col_sum[3] += a[1][3];
                break;
            case 4:
                col_sum[4] += a[1][4];
                break;
        }
    }

    printf("Enter row 3: ");
    for(j=0;j<5;j++){
        scanf("%d", &a[2][j]);
        row_sum[2] += a[2][j];
        switch(j) {
            case 0:
                col_sum[0] += a[2][0];
                break;
            case 1:
                col_sum[1] += a[2][1];
                break;
            case 2:
                col_sum[2] += a[2][2];
                break;
            case 3:
                col_sum[3] += a[2][3];
                break;
            case 4:
                col_sum[4] += a[2][4];
                break;
        }
    }

    printf("Enter row 4: ");
    for(j=0;j<5;j++){
        scanf("%d", &a[3][j]);
        row_sum[3] += a[3][j];
        switch(j) {
            case 0:
                col_sum[0] += a[3][0];
                break;
            case 1:
                col_sum[1] += a[3][1];
                break;
            case 2:
                col_sum[2] += a[3][2];
                break;
            case 3:
                col_sum[3] += a[3][3];
                break;
            case 4:
                col_sum[4] += a[3][4];
                break;
        }
    }

    printf("Enter row 5: ");
    for(j=0;j<5;j++){
        scanf("%d", &a[4][j]);
        row_sum[4] += a[4][j];
        switch(j) {
            case 0:
                col_sum[0] += a[4][0];
                break;
            case 1:
                col_sum[1] += a[4][1];
                break;
            case 2:
                col_sum[2] += a[4][2];
                break;
            case 3:
                col_sum[3] += a[4][3];
                break;
            case 4:
                col_sum[4] += a[4][4];
                break;
        }
    }

    printf("Row totals: ");
    for(i=0;i<5;i++){
        printf("%d ", row_sum[i]);
    }
    printf("\n");

    printf("Column totals: ");
    for(j=0;j<5;j++){
        printf("%d ", col_sum[j]);
    }
    printf("\n");

    return 0;
}