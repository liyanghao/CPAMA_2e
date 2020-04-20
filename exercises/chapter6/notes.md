### 习题1
答：
1 2 4 8 16 32 64 128

### 习题2
答：
9384 938 93 9

### 习题3 
答：
5 4 3 2 

### 习题4
答：(c)

### 习题5
取i=11
(c)

### 习题6
```
#include <stdio.h>

int main(void)
{
	int i;

    for (i=1; i<=128; i *= 2) {
        printf("%d ", i);
    }
    printf("\n");
	
	return 0;
}
```

### 习题7
```
#include <stdio.h>

int main(void)
{
	int i;

	for (i=9384;i>0;i /= 10) {
		printf("%d ", i);
	}
	printf("\n");
	
	return 0;
}
```


### 习题8
10 5 3 2 1 1 1 ... 1...