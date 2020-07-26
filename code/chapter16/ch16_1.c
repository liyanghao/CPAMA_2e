//ch16_1.c

#include<stdio.h>
#define NAME_LEN 25


int main()
{
    struct {
      int number;
      char name[NAME_LEN+1];
      int on_hand;
    } part1 = {528, "Disk drive", 10}, part2;
      // part2 = {914, "Printer cable", 5};

    // 访问结构体变量 
    printf("Part1 number: %d\n", part1.number);
    printf("Part1 name: %s\n", part1.name);
    printf("Part1 Quantity on hand: %d\n", part1.on_hand);

    // 对结构体成员的操作，比如赋值、自增、自减等
    part1.number = 258;
    part1.on_hand++;

    printf("Part1 number: %d\n", part1.number);
    printf("Part1 Quantity on hand: %d\n", part1.on_hand);

    // 从键盘上读取一个值给part1.on_hand
    scanf("%d", &part1.on_hand);
    printf("Part1 Quantity on hand: %d\n", part1.on_hand);

    // 整个结构体的赋值操作
    part2 = part1;
    printf("Part2 number: %d\n", part2.number);
    printf("Part2 name: %s\n", part2.name);
    printf("Part2 Quantity on hand: %d\n", part2.on_hand);
}