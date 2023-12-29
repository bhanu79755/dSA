#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct day
{
    char dayname[20];
    int date;
    char activity[100];
};
void create(struct day calendar[7])
{
    printf("day initialization\n");
    strcpy(calendar[0].dayname, "monday");
    strcpy(calendar[1].dayname, "tuesday");
    strcpy(calendar[2].dayname, "wednesday");
    strcpy(calendar[3].dayname, "thursday");
    strcpy(calendar[4].dayname, "friday");
    strcpy(calendar[5].dayname, "saturday");
    strcpy(calendar[6].dayname, "sunday");
}
void read(struct day calendar[7])
{
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("\n enter details for%s:\n", calendar[i].dayname);
        printf("date and activity:");
        scanf("%d", calendar[i].date);
        gets(calendar[i].activity);
    }
}
void display(struct day calendar[7])
{
    printf("calendar for the week:\n\n");
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("%S(date:%d):", calendar[i].dayname, calendar[i].date);
        puts(calendar[i].activity);
        printf("\n");
    }
}
void main()
{
    struct day *calendar;
    calendar = (struct day *)calloc(7, sizeof(struct day));
    int choice;
    while (1)
    {
        printf("\n*******************calendar program*************************\n");
        printf("1.creat calendar\n");
        printf("2.read calendar\n");
        printf("3.display calendar datewise activity\n");
        printf("4.exit\n");
        printf("*****************************************\n");
        printf("enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create(calendar);
            break;
        case 2:
            read(calendar);
            break;
        case 3:
            display(calendar);
            break;
        case 4:
            exit(0);
        }
    }
}