// Lab 8 Program 1 : C Program to print the largest value and node position in doubly linked list

#include <stdio.h>
#include<stdio.h>
#include <stdlib.h>

struct node 
{
int data;
struct node *next;
struct node *prev;
};

struct node *head=NULL;

int main() 
{
    printf("Enter the elements in the list \n");

    int ch=1;
  
    while(ch!=0)
    {
      
    int item;
    printf("Enter : ");
    
    scanf("%d",&item);
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        ptr->next = NULL;
        ptr->prev=NULL;
        ptr->data=item;
        head=ptr;
      
        printf("\nPress 1 to insert more ,0 to stop insertion : ");
        scanf("%d",&ch);
    }
    else
    {
        ptr->data=item;
        ptr->prev=NULL;
        ptr->next = head;
        head->prev=ptr;
        head=ptr;
      
        printf("\nPress 1 to insert ,0 to stop insertion : ");
        scanf("%d",&ch);
    }
    }
  
    int largest=head->data;
    int pos,count=0;
    struct node *temp=head;
    while(temp!=NULL)
    {
        count++;
        if(temp->data>=largest)
        {
            largest=temp->data;
            pos=count;
        }
        temp=temp->next;
    }
  
    printf("the largest element is %d at position %d",largest,count-pos+1);
    
    return 0;
}
