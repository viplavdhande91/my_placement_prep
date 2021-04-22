/* C Program for level order traversal of a Tree */ 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;

    struct node *right; 

};




struct node* newnode(int data)   
{ 
   struct node  *p = (struct node *) malloc(sizeof(struct node)); 
   p->data = data; 
   p->left = NULL; 
   p->right = NULL; 

   return p; 
} 
/*
 * Function to ascertain the height of a Tree

 */

int heightoftree(struct node *root)
{
    
// If empty tree 
    if (root == NULL) 
        return 0; 
    // If leaf node 
    if (root->left == NULL && root->right == NULL) 
        return 0; 
    
    
    int l;
    int r; 
    l = heightoftree(root->left);
    r = heightoftree(root->right);

    return 1+((l>r)?l:r);

    

}


/*
 * Function to print all the nodes left to right of the current level
 */
void currentlevel(struct node *root, int level)
{
    if (root == NULL) 
    {
        return;
    }
   

    if (level == 1)
    {
        printf("%d ", root->data);
    }
    else if (level > 1) 
    {   
        //1
        currentlevel(root->left, level-1); 
        //2
        currentlevel(root->right, level-1);
    }     


    
}
/*
 * Main Function
 */
int main() 
{   
   /* Creating first Tree. */
    struct node *root = newnode(25); 
    root->left = newnode(27); 
    root->right = newnode(19); 
    root->left->left = newnode(17); 
    root->left->right = newnode(91);
    root->right->left = newnode(13);
    root->right->right = newnode(55); 
    /* Sample Tree 1:
     *                25
     *             /    \  
     *            27     19   
     *           / \     / \ 
     *         17  91   13 55 
     */
    printf("Level Order Traversal of Tree is \n");


    int i;
    int height = heightoftree(root)+1;

    printf("height %d\n",height );
    /* Calling current level function, by passing levels one by one. */
    for(i = 1; i <= height; i++)      
    {
        currentlevel(root,i);
    }
 
  

    return 0; 
}