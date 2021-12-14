// Lab 6 Program 2 : C Program using linked link concept to delete an element n Linked List

#include <stdio.h>
#include <stdlib.h>

void delete();
struct node
{
int data;
struct node *link;
};
int main()
{
struct node *head=(struct node*)malloc(sizeof(struct node));
head->data=45;
head->link=NULL;
  
struct node *current=(struct node*)malloc(sizeof(struct node));
current->data=98;
head->link=current;
current->link=NULL;
current=(struct node*)malloc(sizeof(struct node));
current->data=23;
current->link=NULL;
head->link->link=current;

int loc;
printf("enter which element u wanna delete : ");
scanf("%d",&loc);
delete(&head,loc);

printf("Now the element in list are : \n");
current=head;
while(current!=NULL)
{
  printf("%d ",current->data);
  current=current->link;
}
return 0;
}

void delete(struct node **head, int loc)
{
//node to be wanna delete
struct node *current=*head;
// previous node
struct node *previous=*head; 
if (*head==NULL)
{
  printf("List is already empty");
}
else if(loc==1)
{
  printf("%d is deleted \n",current->data);
  //move head
  *head=current->link;
  free(current);
  current=NULL;
}
else
{
while(loc!=1)
{
  previous=current;
  current=current->link;
  loc--;
}
 
printf("%d is deleted \n",current->data);
previous->link=current->link;
free(current);
current=NULL;
}
}
