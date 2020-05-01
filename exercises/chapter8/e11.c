#include <stdio.h>
// B R B R B R B R 
// R B R B R B R B 
// B R B R B R B R 
// R B R B R B R B 
// B R B R B R B R 
// R B R B R B R B 
// B R B R B R B R 
// R B R B R B R B 

int main(void)
{
	char checker_board[8][8];
	int i,j;

	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if((i+j)%2 == 0){
				printf("%c ", 'B');
				checker_board[i][j]='B';
			}else {
				printf("%c ", 'R');
				checker_board[i][j]='R';
			}
		}
		printf("\n");
	}



	return 0;
}