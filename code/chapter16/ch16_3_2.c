//ch16_3_2.c

#include<stdio.h>
#include<string.h>
#define NAME_LEN 25

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
};

void print_part(struct part);

int main()
{
    //声明结构体数组
    struct part inventory[100];
    int i = 3;

    //访问结构体数组中的某个元素
    print_part(inventory[i]);
    //访问结构体数组中的某个元素的成员
    inventory[i].number = 883;
    //将存储在第i个位置的零件的名字置空
    inventory[i].name[0] = '\0';

    return 0;
}

void print_part(struct part p){
    printf("Part number: %d\n", p.number);
    printf("Part name: %s\n", p.name);
    printf("Part Quantity on hand: %d\n", p.on_hand);
}