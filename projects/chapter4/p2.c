#include <stdio.h>

//规律：如果n是3位数，比如123，则n/100记录的是百位，(n%100)/10是十位，n%10记录的是个位；

int main(void)
{
	int n;

	printf("Enter a three-digits number: ");
	scanf("%d", &n);
	printf("The reversal is : %1d%1d%1d\n", n%10, (n%100)/10, n/100);
	return 0;
}
