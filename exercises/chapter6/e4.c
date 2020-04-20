#include <stdio.h>

int main(void)
{
	int i1, i2, i3;
    
    for(i1=0;i1<10;i1++){
    	printf("%d ", i1);
    }
    printf("\n");

    for(i2=0;i2<10;++i2){
    	printf("%d ", i2);
    }
    printf("\n");

    for(i3=0;i3++<10;){
    	printf("%d ", i3);
    }
    printf("\n");
	
	return 0;
}