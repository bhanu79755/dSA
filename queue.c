#include<stdio.h>
#define QSIZE 5
#include<stdlib.h>
#include<string.h>
int choice,rear,front,count=0;
char queue[10],item;
void insert();
void del();
void display();
void main()
{
    front=0,rear=-1;
    count=0;
    for(;;)
{
    printf("MENU\n");
    printf("1:INSERT\n2:DELETE\n3:DISPLAY\n4:EXIT\n");
    printf("\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("ENTER THE ITEM TO BE INSERTED:");
        scanf("%c\t",&item);
        insert();
        break;
        case 2:del();
        break;
        case 3:display();
        break;
        case 4:exit(0);
    }
   }
}
void insert()
{
    if(count==QSIZE)
    {
        printf("QUEUE IS FULL");
        return;
    }
        rear=(rear+1)%QSIZE;
        queue[rear]=item;
        count+=1;
    }
    void del()
    {
        if(count==0)
        {
            printf("QUEUE UNDERFLOW\n");
            return;
        }
        printf("%c is deleted\n,queue[front]");
            front=(front+1)%QSIZE;
            count-=1;
        }
    
    void display()
    {
        int i,m;
        m=front;
        if(count==0)
        {
            printf("QUEUE IS EMPTY\n");
            return;
        }
        printf("QUEUE IS EMPTY\n");
        for(i=0;i<=count;i++)
        {
            printf("%c\t",queue[m]);
            m=(m+1)%QSIZE;
        }

    }
