#include <stdio.h>

int main()
{
	int x, fx;

	printf("Enter a value for x: ");
	scanf("%d", &x);


	fx = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6; 

	printf("The value of f(%d) is %d\n", x, fx);

    return 0;
}
