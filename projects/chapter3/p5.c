#include <stdio.h>
// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

int main(void)
{

	int a1, a2, a3, a4;
	int a5, a6, a7, a8;
	int a9, a10, a11, a12;
	int a13, a14, a15, a16;
	int row_sum1, row_sum2, row_sum3, row_sum4;
	int col_sum1, col_sum2, col_sum3, col_sum4;
	int diag_sum1, diag_sum2; 

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d",&a1, &a2, &a3, &a4,
		&a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16);

	row_sum1 = a1 + a2 + a3 + a4;
	row_sum2 = a5 + a6 + a7 + a8;
	row_sum3 = a9 + a10 + a11 + a12;
	row_sum4 = a13 + a14 + a15 + a16;

	col_sum1 = a1 + a5 + a9 + a13;
	col_sum2 = a2 + a6 + a10 + a14;
	col_sum3 = a3 + a7 + a11 + a15;
	col_sum4 = a4 + a8 + a12 + a16;

	diag_sum1 = a1 + a6 + a11 + a16;
	diag_sum2 = a13 + a10 + a7 + a4;

	printf("%d\t%d\t%d\t%d\n", a1, a2, a3, a4);
	printf("%d\t%d\t%d\t%d\n", a5, a6, a7, a8);
	printf("%d\t%d\t%d\t%d\n", a9, a10, a11, a12);
	printf("%d\t%d\t%d\t%d\n", a13, a14, a15, a16);
	printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3 , row_sum4);
	printf("Column sums: %d %d %d %d\n", col_sum1, col_sum2, col_sum3 , col_sum4);
	printf("Diagonal sums: %d %d\n", diag_sum1, diag_sum2);


	return 0;
}