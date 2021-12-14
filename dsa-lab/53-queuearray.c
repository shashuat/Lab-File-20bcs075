// Lab 5 Program 3 : Implement the concept of Queues using arrays

#include <stdio.h>

#define SIZE 10
int queue[SIZE],front=0,rear=0,i,j=1,x=SIZE;

void enqueue(void);
void dequeue(void);
void display(void);

int main()
{
    int ch=1;

    printf("Queue using Array");
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
    if(rear==x)
        printf("Queue is Full \n");
    else
    {
        printf("Enter no %d: \n",j++);
        scanf("%d",&queue[rear++]);
    }
}

void dequeue(void)
{
    if(front==rear)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Deleted Element is %d \n",queue[front++]);
        x++;
    }
}

void display(void)
{
    printf("Queue Elements are:\n ");
    if(front==rear)
        printf("Queue is Empty \n");
    else
    {
        for(i=front; i<rear; i++)
        {
            printf("%d \n",queue[i]);
        }
    }
}
