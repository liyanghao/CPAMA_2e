#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);
// 输出一个月的提醒列表
// 输出示例：
// Enter day and reminder: 24 Susan's birthday
// Enter day and reminder: 5 6:00 - Dinner with Marge and Russ
// Enter day and reminder: 26 Movie - "Chinatown" 
// Enter day and reminder: 7 10:30 - Dental appointment
// Enter day and reminder: 12 Movie - "Dazed and Confused"
// Enter day and reminder: 5 Saturday class
// Enter day and reminder: 12 Saturday class
// Enter day and reminder: 0
// Day  Reminder
// 5  Saturday class
// 5  6:00 - Dinner with Marge and Russ
// 7  10:30 - Dental appointment
// 12  Saturday class
// 12  Movie - "Dazed and Confused"
// 24  Susan's birthday
// 26  Movie - "Chinatown"
int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_remind = 0;

    for(;;){
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%2d", &day);
        if (day == 0) {
            break;
        }

        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);

        //i表示要插入的提醒的位置
        //为新输入的提醒查找到合适的插入位置，将原位置的所有提醒统一向后移动一位
        for(i=0;i<num_remind;i++){
    	    if(strcmp(day_str, reminders[i]) < 0){
    	        break;
    	    }
        }
        for(j=num_remind;j>i;j--){
    	    strcpy(reminders[j], reminders[j-1]);
        }

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for(i=0;i<num_remind;i++){
        printf(" %s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i=0;
	
    while((ch = getchar()) != '\n'){
        if(i<n){
	    str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}
