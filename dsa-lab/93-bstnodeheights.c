// Lab 9 Program 3 : C Program to calculate node heights and balancing factors in Binary Search Tree.

#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *l;
struct node *r;
};

struct node *root=NULL;
int b_factor=0;
struct node* insert_data(struct node *s_r,int data)
{
	if(s_r==NULL){
	struct node *temp=(struct node*)(malloc(sizeof(struct node)));
	temp->data=data;
	temp->l=NULL;
	temp->r=NULL;
	printf("%d insert_dataed\n",temp->data);
	return temp;
}
	if(s_r->data>data)
	s_r->l=insert_data(s_r->l,data);
	
	else if(s_r->data<data)
	s_r->r=insert_data(s_r->r,data);
	
	return s_r;
}

int height(struct node *n)
{
	if(n==NULL)
	return 1;

	int l_h=height(n->l);
	int r_h=height(n->r);

	printf("Balancing Factor for %d is %d\n",n->data,abs(l_h-r_h));
	if(l_h>r_h)
	printf("Height of %d is %d\n",n->data,l_h);

	else
	printf("Height of %d is %d\n",n->data,r_h);

	if(l_h>r_h)
	return l_h+1;

	else
	return r_h+1;
}

int main()
{
	int num,data,ch;
	printf("Enter number of elements\n");
	scanf("%d",&num);
	printf("Enter the data\n");
	for(int i=1;i<=num;i++){
	scanf("%d",&data);
	root=insert_data(root,data);
	}
	printf("1.Press 1 to find height\n");
	scanf("%d",&ch);
	if (ch==1){
	height(root);
	}
	else{
	return 0;
	}
}
