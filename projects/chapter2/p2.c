#include <stdio.h>

#define PI 3.1415926
#define COEFFICENT 4.0f/3.0f

int main()
{
	int r;

	r = 10.0f;
	float v = COEFFICENT * PI * r * r * r;


	printf("The volume of a sphere with 10-meter radius is %.2f\n", v);

    return 0;
}
