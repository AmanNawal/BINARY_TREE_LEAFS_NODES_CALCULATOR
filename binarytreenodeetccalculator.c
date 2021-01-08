#include<stdio.h>
int tot=0,root,leaf=0,lefton=0,righton=0,great=0;
struct node
{
int data;
struct node *left,*right,*middle;
};


struct node* create()
{
int x;
struct node *newnode,*sec;

printf("\nenter data (-1 for no entry):\n");
scanf("%d",&x);
if(x==-1)
{
return 0;
}
else
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
tot++;


printf("\nenter left child of %d\n",x);
newnode->left=create();
printf("\nenter right child of %d\n",x);
newnode->right=create();

if(newnode->left!=0 && newnode->right==0)
{
lefton++;
}
if(newnode->right!=0&&newnode->left==0)
{
righton++;
}
if(newnode->left==0 &&newnode->right==0)
{
leaf++;
}
if(newnode->data>root)
{
great++;
}
return newnode;
}
}


void main()
{
struct node *root=0;
root=create();

printf("\ntotal no. of nodes are:\t%d",tot);
printf("\ntotal no. of leafs are:\t%d",leaf);
printf("\nonly left nodes are:\t%d",lefton);
printf("\nonly right nodes:\t%d",righton);

}
