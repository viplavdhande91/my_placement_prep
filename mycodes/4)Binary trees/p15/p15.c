/* C Program for Left view of Binary tree 


Approach :Use level order traversal solution




*/ 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int info;

    struct node *right; 

};


struct node *createnode(int key)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return(newnode);
}
/*
 * Function to ascertain the height of a Tree

 */

int heightoftree(struct node *root)
{
    int max;
    if (root!=NULL)
    {
        /* Finding the height of left subtree. */
        int leftsubtree = heightoftree(root->left);
        /* Finding the height of right subtree. */
        int rightsubtree = heightoftree(root->right);
        if (leftsubtree > rightsubtree)
        {
            max = leftsubtree + 1;
            return max;
        }
        else
        {
            max = rightsubtree + 1;
            return max;
        }
    }
}


/*
 * Function to print all the nodes left to right of the current level
 */
void currentlevel(struct node *root, int level)
{
    if (root != NULL) 
    {
        if (level == 1)
        {
            printf("%d ", root->info);
        }
        else if (level > 1) 
        {   
            //1
            currentlevel(root->left, level-1); 
            //2
            //currentlevel(root->right, level-1);
        }     
    }
}

int main() 
{   
   /* Creating first Tree. */
    struct node *newnode = createnode(25); 
    newnode->left = createnode(27); 
    newnode->right = createnode(19); 
    newnode->left->left = createnode(17); 
    newnode->left->right = createnode(91);
    newnode->right->left = createnode(13);
    newnode->right->right = createnode(55); 
    /* Sample Tree 1:
     *                25
     *             /    \  
     *            27     19   
     *           / \     / \ 
     *         17  91   13 55 
     */
    printf("Level Order Traversal of Tree is \n");


    int i;
    int height = heightoftree(newnode);
    printf("height %d\n",height );
    /* Calling current level function, by passing levels one by one. */
    for(i = 1; i <= height; i++)      
    {
        currentlevel(newnode,i);
    }
 
  

    return 0; 
}