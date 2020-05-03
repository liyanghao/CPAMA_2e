#include <stdio.h>

// Enter five quiz grades for student 1: 8 3 9 0 10
// Enter five quiz grades for student 2: 3 5 17 1 1
// Enter five quiz grades for student 3: 2 8 6 23 1
// Enter five quiz grades for student 4: 15 7 3 2 9
// Enter five quiz grades for student 5: 6 14 2 6 0
// Total score for each student: 30 27 40 36 28 
// Average score for each student: 6 5 8 7 5 
// Average score for each quiz: 6 7 7 6 4 
// High score for each quiz: 15 14 17 23 10 
// Low score for each quiz: 2 3 2 0 0 

int main(void) {
    int a[5][5]={{0}};
    int i,j;
    //行和:表示每个学生的总分数
    //列和:表示每种测验的总分数
    int row_sum[5]={0}, col_sum[5]={0};
    int high_score[5] = {0};
    int low_score[5] = {100, 100, 100, 100, 100};

    for(i=0;i<5;i++){
        printf("Enter five quiz grades for student %d: ", i+1);
        for(j=0;j<5;j++){
            scanf("%d", &a[i][j]);
            row_sum[i] += a[i][j];
            col_sum[j] += a[i][j];
            if (a[i][j] > high_score[j]) {
                high_score[j] = a[i][j];
            }
            if (a[i][j] < low_score[j]) {
                low_score[j] = a[i][j];
            }
        }
    }








    // printf("Enter five quiz grades for student 1: ");
    // for(j=0;j<5;j++){
    //     scanf("%d", &a[0][j]);
    //     row_sum[0] += a[0][j];
    //     switch(j) {
    //         case 0:
    //             col_sum[0] += a[0][0];
    //             high_score[0] = a[0][0];
    //             low_score[0] = a[0][0];
    //             break;
    //         case 1:
    //             col_sum[1] += a[0][1];
    //             high_score[1] = a[0][1];
    //             low_score[1] = a[0][1];
    //             break;
    //         case 2:
    //             col_sum[2] += a[0][2];
    //             high_score[2] = a[0][2];
    //             low_score[2] = a[0][2];
    //             break;
    //         case 3:
    //             col_sum[3] += a[0][3];
    //             high_score[3] = a[0][3];
    //             low_score[3] = a[0][3];
    //             break;
    //         case 4:
    //             col_sum[4] += a[0][4];
    //             high_score[4] = a[0][4];
    //             low_score[4] = a[0][4];
    //             break;
    //     }
    // }
    // printf("Enter five quiz grades for student 2: ");
    // for(j=0;j<5;j++){
    //     scanf("%d", &a[1][j]);
    //     row_sum[1] += a[1][j];
    //     switch(j) {
    //         case 0:
    //             col_sum[0] += a[1][0];
    //             if (a[1][0] > high_score[0]) {
    //                 high_score[0] = a[1][0];
    //             }
    //             if (a[1][0] < low_score[0]) {
    //                 low_score[0] = a[1][0];
    //             }
    //             break;
    //         case 1:
    //             col_sum[1] += a[1][1];
    //             if (a[1][1] > high_score[1]) {
    //                 high_score[1] = a[1][1];
    //             }
    //             if (a[1][1] < low_score[1]) {
    //                 low_score[1] = a[1][1];
    //             }
    //             break;
    //         case 2:
    //             col_sum[2] += a[1][2];
    //             if (a[1][2] > high_score[2]) {
    //                 high_score[2] = a[1][2];
    //             }
    //             if (a[1][2] < low_score[2]) {
    //                 low_score[2] = a[1][2];
    //             }
    //             break;
    //         case 3:
    //             col_sum[3] += a[1][3];
    //             if (a[1][3] > high_score[3]) {
    //                 high_score[3] = a[1][3];
    //             }
    //             if (a[1][3] < low_score[3]) {
    //                 low_score[3] = a[1][3];
    //             }
    //             break;
    //         case 4:
    //             col_sum[4] += a[1][4];
    //             if (a[1][4] > high_score[4]) {
    //                 high_score[4] = a[1][4];
    //             }
    //             if (a[1][4] < low_score[4]) {
    //                 low_score[4] = a[1][4];
    //             }
    //             break;
    //     }
    // }

    // printf("Enter five quiz grades for student 3: ");
    // for(j=0;j<5;j++){
    //     scanf("%d", &a[2][j]);
    //     row_sum[2] += a[2][j];
    //     switch(j) {
    //         case 0:
    //             col_sum[0] += a[2][0];
    //             if (a[2][0] > high_score[0]) {
    //                 high_score[0] = a[2][0];
    //             }
    //             if (a[2][0] < low_score[0]) {
    //                 low_score[0] = a[2][0];
    //             }
    //             break;
    //         case 1:
    //             col_sum[1] += a[2][1];
    //             if (a[2][1] > high_score[1]) {
    //                 high_score[1] = a[2][1];
    //             }
    //             if (a[2][1] < low_score[1]) {
    //                 low_score[1] = a[2][1];
    //             }
    //             break;
    //         case 2:
    //             col_sum[2] += a[2][2];
    //             if (a[2][2] > high_score[2]) {
    //                 high_score[2] = a[2][2];
    //             }
    //             if (a[2][2] < low_score[2]) {
    //                 low_score[2] = a[2][2];
    //             }
    //             break;
    //         case 3:
    //             col_sum[3] += a[2][3];
    //             if (a[2][3] > high_score[3]) {
    //                 high_score[3] = a[2][3];
    //             }
    //             if (a[2][3] < low_score[3]) {
    //                 low_score[3] = a[2][3];
    //             }
    //             break;
    //         case 4:
    //             col_sum[4] += a[2][4];
    //             if (a[2][4] > high_score[4]) {
    //                 high_score[4] = a[2][4];
    //             }
    //             if (a[2][4] < low_score[4]) {
    //                 low_score[4] = a[2][4];
    //             }
    //             break;
    //     }
    // }

    // printf("Enter five quiz grades for student 4: ");
    // for(j=0;j<5;j++){
    //     scanf("%d", &a[3][j]);
    //     row_sum[3] += a[3][j];
    //     switch(j) {
    //         case 0:
    //             col_sum[0] += a[3][0];
    //             if (a[3][0] > high_score[0]) {
    //                 high_score[0] = a[3][0];
    //             }
    //             if (a[3][0] < low_score[0]) {
    //                 low_score[0] = a[3][0];
    //             }
    //             break;
    //         case 1:
    //             col_sum[1] += a[3][1];
    //             if (a[3][1] > high_score[1]) {
    //                 high_score[1] = a[3][1];
    //             }
    //             if (a[3][1] < low_score[1]) {
    //                 low_score[1] = a[3][1];
    //             }
    //             break;
    //         case 2:
    //             col_sum[2] += a[3][2];
    //             if (a[3][2] > high_score[2]) {
    //                 high_score[2] = a[3][2];
    //             }
    //             if (a[3][2] < low_score[2]) {
    //                 low_score[2] = a[3][2];
    //             }
    //             break;
    //         case 3:
    //             col_sum[3] += a[3][3];
    //             if (a[3][3] > high_score[3]) {
    //                 high_score[3] = a[3][3];
    //             }
    //             if (a[3][3] < low_score[3]) {
    //                 low_score[3] = a[3][3];
    //             }
    //             break;
    //         case 4:
    //             col_sum[4] += a[3][4];
    //             if (a[3][4] > high_score[4]) {
    //                 high_score[4] = a[3][4];
    //             }
    //             if (a[3][4] < low_score[4]) {
    //                 low_score[4] = a[3][4];
    //             }
    //             break;
    //     }
    // }

    // printf("Enter five quiz grades for student 5: ");
    // for(j=0;j<5;j++){
    //     scanf("%d", &a[4][j]);
    //     row_sum[4] += a[4][j];
    //     switch(j) {
    //         case 0:
    //             col_sum[0] += a[4][0];
    //             if (a[4][0] > high_score[0]) {
    //                 high_score[0] = a[4][0];
    //             }
    //             if (a[4][0] < low_score[0]) {
    //                 low_score[0] = a[4][0];
    //             }
    //             break;
    //         case 1:
    //             col_sum[1] += a[4][1];
    //             if (a[4][1] > high_score[1]) {
    //                 high_score[1] = a[4][1];
    //             }
    //             if (a[4][1] < low_score[1]) {
    //                 low_score[1] = a[4][1];
    //             }
    //             break;
    //         case 2:
    //             col_sum[2] += a[4][2];
    //             if (a[4][2] > high_score[2]) {
    //                 high_score[2] = a[4][2];
    //             }
    //             if (a[4][2] < low_score[2]) {
    //                 low_score[2] = a[4][2];
    //             }
    //             break;
    //         case 3:
    //             col_sum[3] += a[4][3];
    //             if (a[4][3] > high_score[3]) {
    //                 high_score[3] = a[4][3];
    //             }
    //             if (a[4][3] < low_score[3]) {
    //                 low_score[3] = a[4][3];
    //             }
    //             break;
    //         case 4:
    //             col_sum[4] += a[4][4];
    //             if (a[4][4] > high_score[4]) {
    //                 high_score[4] = a[4][4];
    //             }
    //             if (a[4][4] < low_score[4]) {
    //                 low_score[4] = a[4][4];
    //             }
    //             break;
    //     }
    // }

    printf("Total score for each student: ");
    for(i=0;i<5;i++){
        printf("%d ", row_sum[i]);
    }
    printf("\n");

    printf("Average score for each student: ");
    for(i=0;i<5;i++){
        printf("%d ", row_sum[i]/5);
    }
    printf("\n");

    printf("Average score for each quiz: ");
    for(j=0;j<5;j++){
        printf("%d ", col_sum[j]/5);
    }
    printf("\n");

    printf("High score for each quiz: ");
    for(j=0;j<5;j++){
        printf("%d ", high_score[j]);
    }
    printf("\n");

    printf("Low score for each quiz: ");
    for(j=0;j<5;j++){
        printf("%d ", low_score[j]);
    }
    printf("\n");

    return 0;
}