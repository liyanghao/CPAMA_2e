#include <stdio.h>

int main(void)
{
	int i1 = 1;

	printf("%d ", i1++ - 1);
	printf("%d\n", i1);

	int i2 = 10, j2 = 5;

	printf("%d ", i2++ - ++j2);
	printf("%d %d\n", i2, j2);

	int i3 = 7, j3 = 8;

	printf("%d ", i3++ - --j3);
	printf("%d %d\n", i3, j3);

	int i4 = 3, j4 = 4, k4 = 5;

	printf("%d ", i4++ - j4++ + --k4);
	printf("%d %d %d\n", i4, j4, k4);


	return 0;
}