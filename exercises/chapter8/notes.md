### 习题1
如何计算一个数组里的元素的个数？

答：sizeof(a)/size(a[0])

### 习题2
答：a[d-'0']

### 习题3
```
#include <stdio.h>
typedef int Bool //使用类型定义来设置布尔类型 
#define TRUE 1
#define FALSE 0

//在C89中定义布尔类型数组
int main(void)
{
	Bool weeken[7] = {TRUE,FALSE,FALSE,FALSE,FALSE,FALSE,TRUE};


	return 0;
}
```

### 习题4
```
#include <stdio.h>
#include <stdbool.h>


//在C99中定义布尔类型数组
int main(void)
{
	bool weeken[7] = {[0]=true,[6]=true};


	return 0;
}
```

