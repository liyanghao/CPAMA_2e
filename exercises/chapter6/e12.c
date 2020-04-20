#include <stdio.h>

int main(void)
{
	int n,d;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (d = 2; d*d <= n; d++){
		if (n % d == 0) {
			break;
		}
	}
	if (d*d <= n){
		printf("%d is not a prime.\n", n);
	}else {
		printf("%d is a prime.\n", n);
	}

	return 0;
}