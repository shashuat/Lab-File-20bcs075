// Lab 7 Program 3 : Create Doubly linked list and show the operations of insertion

#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};


void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*head_ref);
	new_node->prev = NULL;

	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	(*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data)
{
	if (prev_node == NULL) {
		printf("the given previous node cannot be NULL");
		return;
	}

	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;

	new_node->prev = prev_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;
}

void append(struct Node** head_ref, int new_data)
{
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));

	struct Node* last = *head_ref; 

	new_node->data = new_data;

	new_node->next = NULL;

	if (*head_ref == NULL) {
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	new_node->prev = last;

	return;
}


void printList(struct Node* node)
{
	struct Node* last;
	printf("\nTraversal in forward direction \n");
	while (node != NULL) {
		printf(" %d ", node->data);
		last = node;
		node = node->next;
	}

	printf("\nTraversal in reverse direction \n");
	while (last != NULL) {
		printf(" %d ", last->data);
		last = last->prev;
	}
}

int main()
{
	/* Start with the empty list */
	struct Node* head = NULL;
  
  int choice=0;     
    printf("\n****Queue operations using linked list****\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Append\n3.PrintList\n4.Exit");  
        printf("\n Enter your choice \n");        
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
                append();  
                break;  
            }  
            case 3:  
            {  
                printlist();  
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

