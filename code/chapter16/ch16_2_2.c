//ch16_2_2.c

#include<stdio.h>
#define NAME_LEN 25

//使用typedef来定义结构体类型
//注意类型的名字Part必须出现在结尾，而不是在struct后面
//由于Part是一个typedef名，则不允许出现struct Part
//所有的Part类型变量都是兼容的
typedef struct {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
} Part;

int main()
{
    // Part part1, part2;
    Part part1 = {528, "Disk drive", 10};
    Part part2;
    part2 = part1;
    printf("Part1 number: %d\n", part1.number);
    printf("Part1 name: %s\n", part1.name);
    printf("Part1 Quantity on hand: %d\n", part1.on_hand);
    printf("Part2 number: %d\n", part2.number);
    printf("Part2 name: %s\n", part2.name);
    printf("Part2 Quantity on hand: %d\n", part2.on_hand);
    return 0;
}