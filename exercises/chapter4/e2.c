#include <stdio.h>

int main(void)
{
	int i1 = 5, j1 = 3;
	printf("%d %d\n", (-i1)/j1, -(i1/j1));

	int i2 = 4, j2 = 3;
	printf("%d %d\n", (-i2)/j2, -(i2/j2));

	return 0;
}