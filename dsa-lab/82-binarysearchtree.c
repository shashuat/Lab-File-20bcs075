// Lab 8 Program 2 : Create a binary search tree and insert nodes at appropriate positions

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

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

int main()
{
    struct node *root = NULL;

    int i,a,n;

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

    return 0;
}

