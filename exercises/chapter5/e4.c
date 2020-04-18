#include <stdio.h>
//&& < 判等运算符<关系运算符<算术运算符
//|| < 判等运算符<关系运算符<算术运算符
//!的优先级跟正负号相同
//逻辑运算符的短路性质
int main(void)
{
	int i1 = 3, j1 = 4;
	printf("%d\n", i1 > j1 ? 1 : (i1 < j1 ? -1 : 0));

	int i2 = 3, j2 = 3;
	printf("%d\n", i2 > j2 ? 1 : (i2 < j2 ? -1 : 0));

	int i3 = 4, j3 = 3;
	printf("%d\n", i3 > j3 ? 1 : (i3 < j3 ? -1 : 0));

	return 0;
}