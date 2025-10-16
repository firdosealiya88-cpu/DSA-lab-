#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#define SIZE 20
struct stack
{
    int top;
    char data[SIZE];
};
 typedef struct stack STACK;
 void push (STACK *s,char item)
 {
     if(s->top<SIZE-1)
 {
     s->data[++(s->top)]=item;
 }
 else{
    printf("\nstack overflow");
 }
 }
 char pop(STACK *s)
 {

     if(s->top!=-1)
     {
         return s->data[(s->top)--];
     }
     else
     {
         printf("\nstack underflow");
         return '\0';
     }
 }
 int preced (char symbol)
 {
     switch(symbol)
     {
     case '+':
     case'-':
        return 1;
     case'*':
     case'/':
        return 3;
     case'^':
        return 4;
     default:
        return 0;

     }

 }
void infixtopostfix(STACK * s ,char infix[20])
     {
         int i,j=0;
         char symbol,postfix[20],temp;
         for(i=0;infix[i]!='\0';i++)
         {
             symbol=infix[i];
             if(isalnum(symbol))
             {
                postfix[j++] =symbol;
             }
             else
             {
                 switch(symbol)
                 {
                 case'(':
                    push(s,symbol);
                    break;

                 case')':
                    temp=pop(s);
                    while(temp!='(')
                    {
                        postfix[j++]=temp;
                        temp=pop(s);
                    }
                    break;
                 case'+':
                 case'-':
                 case'*':
                 case'/':
                 case'^':
                   if ((s->top == -1) || s->data[s->top]=='c'){
                        push(s,symbol);

                   }
                    else
                    {

                        while(preced(s->data[s->top])>=preced
                              (symbol)&&s->top!=-1&&s->data[s->top]!='c')
                        {
                            postfix[j++]=pop(s);
                        }
                        push(s,symbol);

                    }
                    break;
                 }
             }
         }
         while(s->top!=-1)
         {
             postfix[j++]=pop(s);
         }
         postfix[j]='\0';
         printf("postfix exspression is %s\n",postfix);
     }
     int main()
     {
         char infix[20];
         STACK s;
         s.top=-1;
         printf("read infix exspression:");
         scanf("%s",infix);
         infixtopostfix (&s,infix);
         return 0;

     }



