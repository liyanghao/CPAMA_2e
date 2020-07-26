//ch16_3.c

#include<stdio.h>
#include<string.h>
#define FIRST_NAME_LEN 25
#define LAST_NAME_LEN 25

//结构体标记和结构体类型声明
struct person_name {
    char first[FIRST_NAME_LEN+1];
    char middle_initial;
    char last[LAST_NAME_LEN+1];
};

struct student {
    struct person_name name;
    int id, age;
    char sex;
} student1, student2;

void display_name(struct person_name name);

int main()
{

    strcpy(student1.name.first, "Liyang");
    student1.name.middle_initial = '_';
    strcpy(student1.name.last, "Hao");

    display_name(student1.name);

    struct person_name new_name;
    strcpy(new_name.first, "Leiming");
    new_name.middle_initial = '_';
    strcpy(new_name.last, "Hao");

    student1.name = new_name;
    display_name(student1.name);
    
    return 0;

}

void display_name(struct person_name name){
    printf("Person name first: : %s\n", name.first);
    printf("Person name middle: %c\n", name.middle_initial);
    printf("Person name first: %s\n", name.last);
}