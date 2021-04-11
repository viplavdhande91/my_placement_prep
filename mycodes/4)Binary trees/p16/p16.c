/* C Program for Level order traversal in spiral form
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
void currentlevel(struct node *root, int level,int fromleft,int fromright)
{    
    if (root != NULL) 
    {
        if (level == 1)
        {
            printf("%d ", root->info);
        }
        else if (level > 1)

        {  

                  
            if(fromleft == 1)
            {


            currentlevel(root->left, level-1,fromleft,fromright);

            currentlevel(root->right, level-1,fromleft,fromright);


            }
            else if (fromright == 1)
            {
            currentlevel(root->right, level-1,fromleft,fromright);

            currentlevel(root->left, level-1,fromleft,fromright);


            }

          

          
            
    
       }
    }

}
/*
 * Main Function
 */
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

    newnode->left->left->left = createnode(100); 
    newnode->left->right->right = createnode(200);
    newnode->right->left->right = createnode(300);
    newnode->right->right ->right = createnode(400); 
    /* Sample Tree 1:
     *                25
     *             /     \  
     *            27       19   
     *           / \      /  \ 
     *         17  91    13  55 
               /    \     \    \
              100    200   300  400



     */     
    printf("Level wise Spiral Order Traversal of Tree is \n");


    int i;
    int height = heightoftree(newnode);
    printf("height %d\n",height );
    /* Calling current level function, by passing levels one by one. */

    int fromright = 0;
    int fromleft = 0;


    for(i = 1; i <= height; i++)       
    {   
         if (i == 1)
         {
          currentlevel(newnode,i,fromleft,fromright);
         }
         else
         {

         if (i%2 == 0)  //for even level travserse from left
         {
          fromleft = 1;
          fromright = 0;  
          currentlevel(newnode,i,fromleft,fromright);
         }
         else{   //for odd level travserse from right

          fromleft = 0;
          fromright = 1;  
          currentlevel(newnode,i,fromleft,fromright);

         }





         }

    }
 
  

    return 0; 
}