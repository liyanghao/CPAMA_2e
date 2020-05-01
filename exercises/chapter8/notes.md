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

### 习题5
```
#include <stdio.h>

// 0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155

int main(void)
{
	int i;
	int fib_numbers[40]={0,1};

	printf("%d,%d", fib_numbers[0], fib_numbers[1]);

	for (i=2;i<40;i++) {
		fib_numbers[i] = fib_numbers[i-1]+fib_numbers[i-2];
		printf(",%d", fib_numbers[i]);
	}
	printf("\n");


	return 0;
}
```

### 习题6
```
const int segments[10][7] = {
	{1,1,1,1,1,1,0},
	{0,0,0,1,1,0,0},
	{1,1,0,1,1,0,1},
	{1,1,1,1,0,0,1},
	{0,1,1,0,0,1,1},
	{1,0,1,1,0,1,1},
	{1,0,1,1,1,1,1},
	{1,1,1,0,0,0,0},
	{1,1,1,1,1,1,1},
	{1,1,1,1,0,1,1}};



```

### 习题8
```
double temperature_readings[30][24];
```

### 习题9
```
#define DAYS 30
#define HOURS 24


double temperature_readings[30][24];
int i,j;
doubles ave_per_day,sum_month;

sum_month = 0.0;
for(i=0;i<DAYS;i++){
	double sum_days = 0.0;
	sum_month += sum_days/HOURS;
	for(j=0;j<HOURS;j++){
		sum_days+=temperature_readings[i][j];
	}
}

ave_per_day = sum_month/DAYS;
```


