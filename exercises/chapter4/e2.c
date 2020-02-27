#include <stdio.h>

int main(void)
{
	int i1, j1;

	i1 = 8;
	j1 = 5;
	printf("%d %d\n", (-i1)/j1, -(i1/j1));
	return 0;
}