### 习题1
答：
```
无论使用的是C89还是C99编译e1.c，都没有警告信息；
gcc -Wall -std=c89 -o e1 e1.c
```

### 习题2
答：
```
//输出为
Parkinson's Law:
Work expands so as tofill the time
available for the completion.
```

### 习题3
答：
```
#include <stdio.h>


/*
 * Copyright: 2020 by Author Liyang Hao
 * File name: e3.c
 * Description:《C语言：一种现代方法》第二章练习题3
 * Author: Liyang Hao
 * Date: 2020/04/12
 * 
 * 编译指令：
 * gcc -Wall -std=c89 -o e3 e3.c
 * gcc -Wall -std=c99 -o e3 e3.c
 */
int main(void)
{
	int height = 8, length = 12, width = 10, volume;

	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}
```

### 习题4
```
#include <stdio.h>


/*
 * Copyright: 2020 by Author Liyang Hao
 * File name: e4.c
 * Description:《C语言：一种现代方法》第二章练习题4
 * Author: Liyang Hao
 * Date: 2020/04/12
 * 
 * 编译指令：
 * gcc -o e4 e4.c
 * gcc -Wall -std=c99 -o e4 e4.c
 */
int main(void)
{
	int i1, i2;
	float f1, f2;

	printf("Uninitialized int test: %d, %d\n", i1, i2);
	printf("Uninitialized float test: %f, %f\n", f1, f2);

	return 0;
}
```
如果使用`gcc -wall -o e4 e4.c`编译，则有警告信息生成：
```
e4.c:19:45: warning: variable 'i1' is uninitialized when used here [-Wuninitialized]
        printf("Uninitialized int test: %d, %d\n", i1, i2);
                                                   ^~
e4.c:16:8: note: initialize the variable 'i1' to silence this warning
        int i1, i2;
              ^
               = 0
e4.c:19:49: warning: variable 'i2' is uninitialized when used here [-Wuninitialized]
        printf("Uninitialized int test: %d, %d\n", i1, i2);
                                                       ^~
e4.c:16:12: note: initialize the variable 'i2' to silence this warning
        int i1, i2;
                  ^
                   = 0
e4.c:20:47: warning: variable 'f1' is uninitialized when used here [-Wuninitialized]
        printf("Uninitialized float test: %f, %f\n", f1, f2);
                                                     ^~
e4.c:17:10: note: initialize the variable 'f1' to silence this warning
        float f1, f2;
                ^
                 = 0.0
e4.c:20:51: warning: variable 'f2' is uninitialized when used here [-Wuninitialized]
        printf("Uninitialized float test: %f, %f\n", f1, f2);
                                                         ^~
e4.c:17:14: note: initialize the variable 'f2' to silence this warning
        float f1, f2;
                    ^
                     = 0.0
```

如果使用`gcc -o e4 e4.c`，则没有警告信息，多次执行编译后的程序，则输出值没有规律：
```
./e4
Uninitialized int test: 405852197, 32766
Uninitialized float test: -462842252054260350976.000000, 0.000000
➜  chapter2 ./e4
Uninitialized int test: 350928933, 32766
Uninitialized float test: -413554857732317642752.000000, 0.000000
➜  chapter2 ./e4
Uninitialized int test: 311894053, 32766
Uninitialized float test: -283615000784469614185676800.000000, 0.000000
➜  chapter2 ./e4
Uninitialized int test: 327925797, 32766
Uninitialized float test: -6518313815769896594702336.000000, 0.000000
➜  chapter2 ./e4
Uninitialized int test: 204394533, 32766
Uninitialized float test: -1984347388889560852201472.000000, 0.000000
➜  chapter2 ./e4
Uninitialized int test: 91361317, 32766
Uninitialized float test: -29658463795810108671581487104.000000, 0.000000
```

### 习题5
不合法的标识符有：100_bottles

### 习题6
答：很多C的库代码在实现时为了避免与使用者定义的全局符号同名，都采用了**双下划线**、**下划线加大写字母开头**之类的怪异命名法，所以要避开这些名字，以减少名字冲突的风险。

### 习题7
答：`for`、`while`

### 习题8
```
a=(3*q-p*p)/3;
```

涉及的token有：
```
a
=
(
3
*
q
-
p
*
p
)
/
3
;
```
共14个。


### 习题9
书写规范：
- 在tokens之间放入空格符，比如在运算符前后放一个空格符等
```
a = (3 * q - p * p) / 3;
```


### 习题10
源文件`dweight.c`
```
#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;

	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
```



### 参考资料：
1. http://knking.com/books/c2/answers/c2.html