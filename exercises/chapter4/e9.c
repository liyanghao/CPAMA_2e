#include <stdio.h>

int main(void)
{
	int i1 = 7, j1 = 8;

	i1 *=j1 +1;

	printf("%d %d\n", i1, j1); 

	int i2 = 1, j2 = 1, k2 = 1;
	i2 += j2 += k2;

	printf("%d %d %d\n", i2, j2, k2);

	int i3 = 1, j3 = 2, k3 = 3;
	i3 -= j3 -= k3;

	printf("%d %d %d\n", i3, j3, k3);

	int i4 = 2, j4 = 1, k4 = 0;
	i4 *= j4 *= k4;

	printf("%d %d %d\n", i4, j4, k4);

	return 0;
}