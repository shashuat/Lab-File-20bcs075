// Lab 6 Program 1 : C Program to Insert the elements in Linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *link;
};

int main()
{
//malloc stored head address
struct node *head=(struct node*)malloc(sizeof(struct node));
head->data=45;
// NULL will be address of link now
head->link=NULL; 

struct node *current=(struct node*)malloc(sizeof(struct node));
 
current->data=37;
head->link=current;
current->link=NULL;
current=(struct node*)malloc(sizeof(struct node));
current->data=43;
current->link=NULL;
head->link->link=current;
  
printf("3rd data is : %d",head->link->link->data);

return 0;
}
