/* Prints a table of squares using a for statement */
#include <stdio.h>

int main(void){
    long int i, n;
    long int result;

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

    printf("The smallest number that causes failure is %ld\n", n);

    long int w, bits;


    w = 1;
    bits = 0;

    while (w < n) {
    	w *= 2;
    	bits++;
    }

    printf("The number of bits used to store long integer on your machine is %ld\n", 2 * bits);


    return 0;
}