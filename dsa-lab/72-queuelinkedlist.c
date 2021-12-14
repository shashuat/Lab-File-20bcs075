// Lab 7 Program 2 : Create a linked list and show insertion and deletion as per queues

#include <stdio.h>
#include <stdlib.h>

struct QNode {
	int key;
	struct QNode* next;
};


struct Queue {
	struct QNode *front, *rear;
};

struct QNode* newNode(int k)
{
	struct QNode* temp = (struct QNode*)malloc(sizeof(struct QNode));
	temp->key = k;
	temp->next = NULL;
	return temp;
}

struct Queue* createQueue()
{
	struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
	q->front = q->rear = NULL;
	return q;
}

void enQueue(struct Queue* q, int k)
{
	struct QNode* temp = newNode(k);

	if (q->rear == NULL) {
		q->front = q->rear = temp;
		return;
	}

	q->rear->next = temp;
	q->rear = temp;
}

void deQueue(struct Queue* q)
{
	if (q->front == NULL)
		return;

	struct QNode* temp = q->front;

	q->front = q->front->next;

	if (q->front == NULL)
		q->rear = NULL;

	free(temp);
}

int main()
{
    int choice=0;     
    printf("\n****Queue operations using linked list****\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.EnQueue\n2.DeQueue\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                EnQueue();  
                break;  
            }  
            case 2:  
            {  
                Dequeue();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  

	return 0;
}

