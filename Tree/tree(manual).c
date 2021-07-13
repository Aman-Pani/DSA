#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left,*right;
    int info;
};
typedef struct node nd;

nd* create(nd*);
void inorder(nd*);
void preorder(nd*);
void postorder(nd*);

int main()
{
    nd *root=NULL,*lch,*rch,*temp;
    root=create(root);
    root->info=8;
    lch=create(lch);
    lch->info=3;
    root->left=lch;
    rch= create(rch);
    rch->info=10;
    root->right=rch;
    lch->left=create(lch->left);
    temp=lch;
    lch=lch->left;
    lch->info=1;
    lch= temp;
    lch->right=create(lch->right);
    temp=lch;
    lch=lch->right;
    lch->info=6;
    lch->left=create(lch->left);
    lch->left->info=4;
    lch->right=create(lch->right);
    lch->right->info=7;
    temp=root->right;
    rch=create(rch);
    temp->right=rch;
    rch->info=14;
    rch->left=create(rch->left);
    rch->left->info=13;

    printf("The in-order traversal::\n");
    inorder(root);

    printf("\n\nThe pre-order traversal::\n");
    preorder(root);

    printf("\n\nThe post-order traversal::\n");
    postorder(root);

    return 0;
}

nd* create (nd* root)
{
    root= (nd*)malloc(sizeof(nd));
    root->left=root->right=NULL;
    return root;
}

void inorder(nd* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("-> %d ",root->info);
        inorder(root->right);
    }
}

void preorder(nd *root)
{
    if(root != NULL)
    {
        printf("-> %d ", root->info);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(nd *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("-> %d ", root->info);
    }
}

