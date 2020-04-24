/* Prints a table of squares using a for statement */
#include <stdio.h>

int main(void){
    short int i, n;
    short int result;

    result = 1;
    n = 1;

    while(result > 0) {
	    for (i=1; i<=n; i++){
	        result = i*i;
	        if (result < 0) {
	        	break;
	        }
	    }
	    if (result > 0) {
	    	n++;
	    }
    }

    printf("The smallest number that causes failure is %hd\n", n);

    return 0;
}