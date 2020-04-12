#include <stdio.h>

#define PI 3.1415926
#define COEFFICENT 4.0f/3.0f

int main()
{
	int r;

	printf("Enter the radius: ");
	scanf("%d", &r);

	float v = COEFFICENT * PI * r * r * r;


	printf("The volume of a sphere with %d-meter radius is %.2f\n", r, v);

    return 0;
}
