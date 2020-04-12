#include <stdio.h>


/*
 * Copyright: 2020 by Author Liyang Hao
 * File name: e3.c
 * Description:《C语言：一种现代方法》第二章练习题3 
 * Author: Liyang Hao
 * Date: 2020/04/12
 * 
 * 编译指令：
 * gcc -Wall -std=c89 -o e3 e3.c
 * gcc -Wall -std=c99 -o e3 e3.c
 */
int main(void)
{
	int height = 8, length = 12, width = 10, volume;

	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}