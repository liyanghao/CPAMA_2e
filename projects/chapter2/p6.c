#include <stdio.h>

int main()
{
	int x, fx;

	printf("Enter a value for x: ");
	scanf("%d", &x);


	fx = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("The value of f(%d) is %d\n", x, fx);

    return 0;
}
