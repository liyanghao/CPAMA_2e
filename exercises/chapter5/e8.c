#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age;
	bool teenager;

	printf("Enter the age: ");
	scanf("%d", &age);

	if (age >= 13) {
		if (age <= 19) {
			teenager = true;
		}else {
			teenager = false;
		}
	}else if (age < 13) {
		teenager = false;
	}

	printf("%d\n", teenager);

	teenager = (age >=13 && age <= 19) ? true:false;

	printf("%d\n", teenager);



	return 0;
}
