// Lab 5 Program 4 : Write a C program to implement circular queue concept

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int queue[SIZE],front=-1,rear=-1,i,j=1,x=SIZE;

void enqueue(void);
void dequeue(void);
void display(void);

int main()
{
    int ch=1;

    printf("Circular Queue using Array");
    printf("\n1.EnQueue \n2.DeQueue \n3.Display \n4.Exit\n");
    
    while(ch)    
    {
        printf("\nEnter the Choice:\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf ("Please Enter a Valid Choice(1/2/3/4) \n");
        }
    }

    return 0;
}

void enqueue()
{
    if((front==0 && rear == SIZE - 1) || (front == rear + 1))
    {
        printf("Queue is Full \n");
    }
    else if (rear ==  - 1)
    {
        rear++;
        front++;
    }
    else if (rear == SIZE - 1 && front > 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }

    scanf("%d",&queue[rear]);
}

void dequeue(void)
{
    if (front ==  - 1)
    {
        printf("Queue is empty ");
    }
    else if (front == rear)
    {
        printf("\n %d deleted", queue[front]);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        printf("\n %d deleted", queue[front]);
        front++;
    }
}

void display(void)
{
    printf("\n");
    if (front > rear)
    {
        for (i = front; i < SIZE; i++)
        {
            printf("%d ", queue[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}
