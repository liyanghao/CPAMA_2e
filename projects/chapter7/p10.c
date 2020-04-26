#include <stdio.h>
#include <ctype.h>

// Enter a sentence: And that's the way it is.
// Your sentence contains 6 vowels.

int main(void)
{
	int count;
	char ch;

	printf("Enter a sentence: ");

	count = 0;
	while ((ch=getchar()) != '\n') {
		ch = toupper(ch);
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
			count++;
		}
	}


	printf("Your sentence contains %d vowels.\n", count);

    return 0;
}