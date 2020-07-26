//ch16_2.c

#include<stdio.h>
#define NAME_LEN 25


int main()
{
    // struct {
    //   int number;
    //   char name[NAME_LEN+1];
    //   int on_hand;
    // } part1 = {528, "Disk drive", 10};

    // printf("Part1 number: %d\n", part1.number);
    // printf("Part1 name: %s\n", part1.name);
    // printf("Part1 Quantity on hand: %d\n", part1.on_hand);

    // struct {
    //   int number;
    //   char name[NAME_LEN+1];
    //   int on_hand;
    // } part2;

    //注意，根据C语言规范，part1和part2的类型是不兼容的。


    // part2 = part1;
    // printf("Part2 number: %d\n", part2.number);
    // printf("Part2 name: %s\n", part2.name);
    // printf("Part2 Quantity on hand: %d\n", part2.on_hand);

    struct part {
      int number;
      char name[NAME_LEN+1];
      int on_hand;
    };

    //注意，不能省略struct，part表示一个类型名，只是一个标记名
    // struct part part1, part2;

    //混合使用结构体标记声明和结构体变量声明
    // struct part {
    //   int number;
    //   char name[NAME_LEN+1];
    //   int on_hand;
    // } part1, part2;

    //所有声明为struct part类型的结构体类型是兼容的，可以进行赋值操作
    struct part part1 = {528, "Disk drive", 10};
    struct part part2;
    part2 = part1;
    printf("Part1 number: %d\n", part1.number);
    printf("Part1 name: %s\n", part1.name);
    printf("Part1 Quantity on hand: %d\n", part1.on_hand);
    printf("Part2 number: %d\n", part2.number);
    printf("Part2 name: %s\n", part2.name);
    printf("Part2 Quantity on hand: %d\n", part2.on_hand);
    
    return 0;

}