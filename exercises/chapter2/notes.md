1. 在main函数的末尾没有return语句会有什么后果？
答：
return语句不是必须的。如果没有return语句，程序一样会终止。
- 在C89中，如果没有return语句，则main函数返回给操作系统的值是未定义的。
- 在C99中，如果main函数声明的返回值类型是int，且没有return语句，程序返回给操作系统的值是0，否则程序返回一个不确定的值。

2. 标识符的命名规则有哪些？
- 必须以字母或者下划线开头；
- 标识符可以含有字母、数字、下划线；
- C语言中的标识符是区分大小写的；
- C语言对标识符的长度没有限制；
- C语言中的关键字不能用作标识符；

3. 一个C程序里都有哪些tokens?
- 标识符；
- 关键字；
- 操作符，比如+、-等；
- 标点符号，比如`,`、`;`；
- 字符串字面量等
