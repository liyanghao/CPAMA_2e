#include <stdio.h>
#define IN 1 //在一个单词里
#define OUT 0 //不在读一个单词

// Enter a sentence: It was deja vu all over again.
// Average word length: 5.000000

//参考英文版K&R
int main(void)
{
	char ch;
	int word_count, state;
	float len, average_len;

	printf("Enter a sentence: ");

	len = 0.0f;
	word_count = 0;
	while ((ch=getchar()) != '\n') {
		len++;
		if (ch == ' ' || ch == '\n' || ch == '\t') {
			state = OUT;
		}else if(state == OUT){
			state = IN;
			word_count++;
		}
	}

	// printf("%d\n", word_count);

	average_len = len/word_count;
	printf("Average word length: %f\n", average_len);
    return 0;
}