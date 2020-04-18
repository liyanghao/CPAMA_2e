#include <stdio.h>

int main(void)
{
	int i1 = 6, j1;

	j1 = i1 += i1;;

	printf("%d %d\n", i1, j1); 

	int i2 = 5, j2;

	j2 = (i2 -= 2) + 1;

	printf("%d %d\n", i2, j2);

	int i3 = 7, j3;

	j3 = 6 + (i3 = 2.5);

	printf("%d %d\n", i3, j3);

	int i4 = 2, j4 = 8;

	j4 = (i4 = 6) + (j4 = 3);

	printf("%d %d\n", i4, j4);


	return 0;
}