#include <stdio.h>
//&& < 判等运算符<关系运算符<算术运算符
//|| < 判等运算符<关系运算符<算术运算符
//!的优先级跟正负号相同
//逻辑运算符的短路性质
int main(void)
{
	int i1 = 3, j1 = 4, k1 = 5;
	printf("%d ", i1 < j1 || ++j1 < k1);
	printf("%d %d %d\n", i1, j1, k1);

	int i2 = 7, j2 = 8, k2 = 9;
	printf("%d ", i2 - 7 && j2++ < k2);
	printf("%d %d %d\n", i2, j2, k2);

	int i3 = 7, j3 = 8, k3 = 9;
	printf("%d ", (i3 = j3) || (j3 = k3));
	printf("%d %d %d\n", i3, j3, k3);

	int i4 = 1, j4 = 1, k4 = 1;
	printf("%d ", ++i4 || ++j4 && ++k4);
	printf("%d %d %d\n", i4, j4, k4);
	return 0;
}