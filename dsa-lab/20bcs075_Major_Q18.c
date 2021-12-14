// Q. 18 DSA Major
// Shashwat Sharma 20bcs075


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main() 
{
    //head stores address created by malloc
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    // NULL assigned to link
    head->link=NULL;

    struct node *current=(struct node*)malloc(sizeof(struct node));

    current->data=111;
    head->link=current;
    current->link=NULL;

    current=(struct node*)malloc(sizeof(struct node));

    current->data=20;
    current->link=NULL;
    head->link->link=current;

    current=(struct node*)malloc(sizeof(struct node));

    current->data=222;
    current->link=NULL;
    head->link->link->link=current;

    current=(struct node*)malloc(sizeof(struct node));

    current->data=30;
    current->link=NULL;
    head->link->link->link->link=current;

    current=(struct node*)malloc(sizeof(struct node));

    current->data=333;
    current->link=NULL;
    head->link->link->link->link->link=current;

    current=(struct node*)malloc(sizeof(struct node));
    
    current->data=40;
    current->link=NULL;
    head->link->link->link->link->link->link=current;


    current=head;
    printf("Elements in Linked List are :\n");
    while(current!=NULL)
    {
        printf("%d \t",current->data);
        current=current->link;
    }

    printf("\n");

    return 0;
}
