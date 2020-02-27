#include <stdio.h>

int main(void)
{
	int i, j;

	i = 2;
	j = 3;
	printf("%d\n", (i+10)%j);
}