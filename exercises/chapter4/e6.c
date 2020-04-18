#include <stdio.h>

// gcc -O -std=c99 -o e6 e6.c 
// ./e6
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