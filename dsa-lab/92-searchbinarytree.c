// Lab 9 Program 2 : Using binary search tree search an element in the tree.

#include<stdio.h>
#include<stdbool.h>  
#include<stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;  
   
static bool flag = false;  

//this function will return the new node with the given value
struct node *getNewNode(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->key   = val;
    newNode->left  = NULL;
    newNode->right = NULL;

    return newNode;

}


struct node *insert(struct node *root, int val)
{
    if(root == NULL)
        return getNewNode(val);


    if(root->key < val)
        root->right = insert(root->right,val);


    else if(root->key > val)
        root->left = insert(root->left,val);


    return root;
}


void inorder(struct node *root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    printf("%d ",root->key);
    inorder(root->right);
}

void searchNode(struct node *temp, int value)
{  
    if(root == NULL){  
        printf("Tree is empty\n");  
    }  
    else{  
        if(temp->key == value){  
            flag = true;  
             return;  
        }  
        //Search in left subtree  
        if(flag == false && temp->left != NULL)
        {  
        searchNode(temp->left, value);  
        }  
        //Search in right subtree  
        if(flag == false && temp->right != NULL)
        {  
        searchNode(temp->right, value);  
        }  
    }  
} 

int main()
{
    struct node *root = NULL;

    int i,a,s,n;

    printf("Enter Number of elements to be inserted: ");
    scanf("%d",&n);

    printf("Enter the elements: ");

    for(i = 0; i<n;i++)
    {
        scanf("%d",&a);
        root = insert(root,a);
    }

    inorder(root);
    printf("\n");

    printf("Enter element to be searched: ");
    scanf("%d",&s);

    searchNode(root,s);

    return 0;
}
