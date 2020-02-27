#include <stdio.h>

//规律：如果n是3位数，比如123，则n/100记录的是百位，(n%100)/10是十位，n%10记录的是个位；

int main(void)
{
	int n1, n2, n3;

	printf("Enter a three-digits number: ");
	scanf("%1d%1d%1d", &n1, &n2, &n3);
	printf("The reversal is : %1d%1d%1d\n", n3, n2, n1);
	return 0;
}
