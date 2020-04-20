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

### 习题9
```
#include <stdio.h>

int main(void)
{
	int i;

	i = 10;
	while(i>=1){
		printf("%d ", i++);
		i /= 2;
	}

	return 0;
}
```

### 习题11
答：20

### 习题12
```
#include <stdio.h>

int main(void)
{
	int n,d;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (d = 2; d*d <= n; d++){
		if (n % d == 0) {
			break;
		}
	}
	if (d*d <= n){
		printf("%d is not a prime.\n", n);
	}else {
		printf("%d is a prime.\n", n);
	}

	return 0;
}
```


