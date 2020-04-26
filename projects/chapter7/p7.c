#include <stdio.h>

// Enter two fractions: 1/2 1/3
// Enter the operator: +
// The sum is 5/6

// Enter two fractions: 1/2 1/3
// Enter the operator: -
// The differnce is 1/6
         
// Enter two fractions: 1/2 1/3
// Enter the operator: *
// The multiplication is 1/6

// Enter two fractions: 1/2 1/3
// Enter the operator: /
// The division is 3/2


//混合使用scanf和getchar要注意的问题
int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char operator;

    printf("Enter two fractions: ");
    scanf("%d/%d %d/%d", &num1, &denom1, &num2, &denom2);
    printf("Enter the operator: ");
    // scanf(" %c", &operator);
    while ((operator = getchar()) == '\n') {
    	;
    }
    switch(operator){
    	case '+':
    		result_num = num1 * denom2 + num2 * denom1;
		    result_denom = denom1 * denom2;
		    printf("The sum is %d/%d\n", result_num, result_denom);
    		break;
    	case '-':
    		result_num = num1 * denom2 - num2 * denom1;
		    result_denom = denom1 * denom2;
		    printf("The differnce is %d/%d\n", result_num, result_denom);
    		break;
    	case '*':
    		result_num = num1 * num2;
		    result_denom = denom1 * denom2;
		    printf("The multiplication is %d/%d\n", result_num, result_denom);
    		break;
    	case '/':
    		result_num = num1 * denom2;
		    result_denom = denom1 * num2;
		    printf("The division is %d/%d\n", result_num, result_denom);
    		break;
    }
    
    return 0;
}