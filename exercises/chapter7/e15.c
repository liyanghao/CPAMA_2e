#include <stdio.h>
typedef char Int8;
typedef short int Int16;
typedef int Int32;

int main(void)
{
	Int8 a = 'a';
	printf("%d\n", a);

	Int16 b = 456;
	printf("%d\n", b);

	Int32 c = 80000;
	printf("%d\n", c);
	return 0;
}