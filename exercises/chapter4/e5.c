#include <stdio.h>

// gcc -O -std=c89 -o e5 e5.c
// ./e5
// 3
// -3
// 3
// -3

int main(void)
{
	printf("%d\n", 8%5);
	printf("%d\n", -8%5);
	printf("%d\n", 8%-5);
	printf("%d\n", -8%-5);
	return 0;
}