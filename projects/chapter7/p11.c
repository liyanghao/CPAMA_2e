#include <stdio.h>
#include <ctype.h>
          
// Enter a first and last name:   Lloyd   Fosdick   
// Fosdick, L.

// Enter a first and last name: Lloyd Fosdick
// Fosdick, L.
          
// Enter a first and last name:   Lloyd  Fosdick
// Fosdick, L.


int main(void)
{
	char ch, first_name;

	printf("Enter a first and last name: ");
	//跳过first name前的空格
	while((ch=getchar()) == ' '){
		;
	}
	//记录first name的首字母
	first_name = ch;
	while ((ch = getchar()) != ' ') {
		;
	}
	//跳过first name跟last name之间的空格
	while((ch=getchar()) == ' '){
		;
	}
	//输出last name的首字母
	putchar(ch);
	while ((ch=getchar()) != '\n') {
		if (ch == ' ') {
			break;
		}
		putchar(ch);
	}
	putchar(',');
	putchar(' ');
	putchar(first_name);
	putchar('.');
	putchar('\n');

    return 0;
}