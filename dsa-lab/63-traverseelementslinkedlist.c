// Lab 6 Program 3 : Perform Traversal function using linked list concept

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
    current=head;
  
    printf("the elements in the list are :\n");
    while(current!=NULL)
    {
        printf("%d\t",current->data);
        current=current->link;
    }
    return 0;
}
