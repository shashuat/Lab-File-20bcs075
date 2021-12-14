// Lab 5 Program 1 : Write a C Program to implement stack using an Array

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int stack[SIZE],n,top,x,i;

void push(void);
void pop(void);
void display(void);

int main()
{
    int choice;

    top=-1;

    printf("Enter the size of STACK[MAX=100]: \n");
    scanf("%d",&n);

    printf("\n STACK OPERATIONS USING ARRAY");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf("\n Enter the Choice: \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("EXIT POINT \n");
                break;
            }
            default:
            {
                printf ("Please Enter a Valid Choice(1/2/3/4) \n");
            }
                
        }
    }

    while(choice!=4);
    return 0;
}

void push()
{
    if(top>=n-1)
    {
        printf("STACK is over flow \n");
        
    }
    else
    {
        printf("Enter a value to be pushed: \n");
        scanf("%d",&x);

        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("Stack is under flow \n");
    }
    else
    {
        printf("The popped elements is %d \n",stack[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("%d\n",stack[i]);
        printf("Press Next Choice \n");
    }
    else
    {
        printf("The STACK is empty \n");
    }
   
}
