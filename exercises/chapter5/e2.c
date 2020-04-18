#include <stdio.h>
//&& < 判等运算符<关系运算符<算术运算符
//|| < 判等运算符<关系运算符<算术运算符
//!的优先级跟正负号相同
int main(void)
{
	int i1 = 10, j1 = 5;
	printf("%d\n", !i1 < j1);

	int i2 =2, j2 = 1;
	printf("%d\n", !!i2 + !j2);

	int i3 = 5, j3 = 0, k3 = -5;
	printf("%d\n", i3 && j3 || k3);

	int i4 = 1, j4 = 2, k4 =3;
	printf("%d\n", i4 < j4 || k4);


	return 0;
}