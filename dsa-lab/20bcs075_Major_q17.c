// Q. 17 DSA Major, Create Binary Search Tree the displays the given figure below.
//     10
//      \ 
//       30
//       / \ 
//      25  40
//             \ 
//              45

// Shashwat Sharma 20bcs075

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


// To display the exact tree as the figure, preorder traversal is used
void preorder(struct node *root)
{
    if(root == NULL)
        return;

    //visit the root
    printf("%d",root->key);

    //traverse the left subtree
    preorder(root->left);

    //traverse the right subtree
    preorder(root->right);
}


int main()
{
    struct node *root = NULL;

    int i,a,b,c,n;

    // inserting elements of tree
    root = insert(root,10);
    root = insert(root,30);
    root = insert(root,25);
    root = insert(root,40);
    root = insert(root,45);


    printf("\nBinary Search Tree as given in question  : \n");
    
    preorder(root);

    printf("\n");

    return 0;
}