// Lab 8 Program 4 : Write a C program to perform deletion of leaf node in binary search tree

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};

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

int getRightMin(struct node *root)
{
    struct node *temp = root;

    while(temp->left != NULL){ temp = temp->left;}

    return temp->key;
}

struct node *removeNode(struct node *root, int val)
{

    if(root == NULL)
        return NULL;

    if(root->key < val)
        root->right = removeNode(root->right,val);

    else if(root->key > val)
        root->left = removeNode(root->left,val);

    else
    {

        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        else if(root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }

        else if(root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        else
        {
            int rightMin = getRightMin(root->right);
            root->key = rightMin;
            root->right = removeNode(root->right,rightMin);
        }

    }

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

    int i,a,b,n;

    printf("Enter Number of elements to be inserted: ");
    scanf("%d",&n);

    printf("Enter the elements: ");

    for(i = 0; i<n;i++)
    {
        scanf("%d",&a);
        root = insert(root,a);
    }

    printf("Initial tree :\t");
    inorder(root);
    printf("\n");

    printf("Enter node to be deleted: ");
    scanf("%d", &b);


    root = removeNode(root,b);
    printf("After deletion the new tree :\t");
    inorder(root);
    printf("\n");

    return 0;
}