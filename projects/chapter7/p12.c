#include <stdio.h>
#include <ctype.h>

// Enter an expression: 1+2.5*3
// Value of expression: 10.500000

//技巧：先预读一个数，然后分组成一个运算符和一个操作数读；

int main(void)
{
	char ch, helper;
	float operator, operator2, result;


	printf("Enter an expression: ");
	result = 0.0f;
	scanf("%f", &operator);
	result += operator;
	do {
		scanf("%c", &ch);
		if (ch == '\n') {
			break;
		}
		scanf("%f", &operator);
		// printf("%c %f\n", ch,operator);
		switch(ch){
			case '+':
				result += operator;
				break;
			case '-':
				result -= operator;
				break;
			case '*':
				result *= operator;
				break;
			case '/':
				result /= operator;
				break;
		}
	}while(ch != '\n' || ch != ' ');

	printf("Value of expression: %f\n", result);

    return 0;
}