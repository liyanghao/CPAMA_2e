### 习题1
(a) 1
(b) 1
(c) 1
(d) 0

### 习题2
(a) 1
(b) 1
(c) 1
(d) 1

### 习题3
//逻辑运算符的短路性质
(a)
1
3 4 5
(b)
0
7 8 9
(c)
1
8 8 9
(d)
1
2 1 1

### 习题4
```
i > j ? 1 : (i < j ? -1 : 0)
```

### 习题5
合法，
输出是
```
n is b
```

### 习题6
合法，什么都不输出

### 习题7
答：17 17

### 习题8
```
teenager = age > 19 ? false : (age > 13 ? true : false);
//
teenager = (age >=13 && age <= 19) ? true:false;
```

### 习题9
等价

### 习题10
onetwo

### 习题11
```
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int area_code;

	printf("Enter the area code: ");
	scanf("%d", &area_code);

	switch(area_code){
		case 229:
			printf("Albany");
			break;
		case 404:
		case 470:
		case 678:
		case 770:
			printf("Atlanta");
			break;
		case 478:
			printf("Macon");
			break;
		case 706:
		case 762:
			printf("Columbus");
			break;
		case 912:
			printf("Savannah");
			break;

		default:
			printf("Area code not recongnized\n");
			break;

	}

	return 0;
}
```