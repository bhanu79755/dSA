#include<stdio.h>
#include<string.h>
char infix[50],postfix[50];
char s[10];
int top=-1;
void main()
{
    void push();
    char pop();
    void convert();
    int pri(char ch);
    printf("enter the infix expression\n");
    scanf("%s",infix);
    convert();
}
void push(char ch)
{
    s[++top]=ch;
}
char pop()
{
    return(s[top--]);
}
int pri(char ch)
{
    if(ch=='('||ch=='#')
       return 1;
    if(ch=='+'||ch=='-')
       return 2;
    if(ch=='*'||ch=='/'||ch='%')
       return 3;
    if(ch=='^')
      return 4;
    return 0;
}
void convert()
{
    int i,j=0;
    push('#');
    for(i=0;infix[i]!='\0';i++)
    {
        if(isalnum(infix[i]))
          postfix[j++]=infix[i];
        else if(infix[i]=='(')
          push(infix[i]);
        else if (infix[i]==')')
          {
            while(s[top]!='(')
              postfix[j++]=pop();
            pop();
          }
          else
          {
            while (pri(s[top])>=pri(infix[i]))
              postfix[j++]=pop();
            push(infix[i]);
            
            }
    }
            
          
    while(s[top]!='#')
     postfix[j++]=pop();
    postfix[j]='\0';
    printf("postfix expression===>%s",postfix);

    
}

