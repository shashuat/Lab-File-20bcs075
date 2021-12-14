// Lab 6 Program 4 : C program to swap the first and last data elements of nodes in a Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *link;
};

int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
  
    head->data=15;
    head->link=NULL;
  
    struct node *current=(struct node*)malloc(sizeof(struct node));
    current->data=18;
    head->link=current;
    current->link=NULL;
  
    current=(struct node*)malloc(sizeof(struct node));
    current->data=21;
    current->link=NULL;
    head->link->link=current;
  
    printf("original list:\n");
    while(current!=NULL)
    {
        printf("%d\t",current->data);
        current=current->link;
    }
  
    printf("list after swapping the first and last elements");
   
    int temp=current->data;
  
    current->data=head->data;
    head->data=temp;
    current=head;
    printf("\n");
    
    while(current!=NULL)
    {
        printf("%d\t",current->data);
        current=current->link;
    }
  
    return 0;
}
