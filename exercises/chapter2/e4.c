#include <stdio.h>


/*
 * Copyright: 2020 by Author Liyang Hao
 * File name: e4.c
 * Description:《C语言：一种现代方法》第二章练习题4
 * Author: Liyang Hao
 * Date: 2020/04/12
 * 
 * 编译指令：
 * gcc -Wall -std=c99 -o e4 e4.c
 */
int main(void)
{
	int i1, i2;
	float f1, f2;

	printf("Uninitialized int test: %d, %d\n", i1, i2);
	printf("Uninitialized float test: %f, %f\n", f1, f2);

	return 0;
}