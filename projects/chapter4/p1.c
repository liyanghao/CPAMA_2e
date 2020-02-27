#include <stdio.h>

//规律：如果n是两位数，则n/10记录的是十位，n%10记录的是个位；

int main(void)
{
	int n;

	printf("Enter a two-digits number: ");
	scanf("%2d", &n);
	printf("The reversal is : %1d%1d\n", n%10, n/10);
	return 0;
}
