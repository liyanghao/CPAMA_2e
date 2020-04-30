#include <stdio.h>

// 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155

int main(void)
{
	int i;
	int fib_numbers[40]={0,1};

	printf("%d,%d", fib_numbers[0], fib_numbers[1]);

	for (i=2;i<40;i++) {
		fib_numbers[i] = fib_numbers[i-1]+fib_numbers[i-2];
		printf(",%d", fib_numbers[i]);
	}
	printf("\n");


	return 0;
}