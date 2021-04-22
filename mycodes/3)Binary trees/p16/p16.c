/* C Program for Level order traversal in spiral form
 */ 
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
void currentlevel(struct node *root, int level,int fromleft,int fromright)
{    
    if (root != NULL) 
    {
        if (level == 1)
        {
            printf("%d ", root->data);
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
    struct node *root = newnode(25); 
    root->left = newnode(27); 
    root->right = newnode(19); 
    root->left->left = newnode(17); 
    root->left->right = newnode(91);
    root->right->left = newnode(13);
    root->right->right = newnode(55);

    root->left->left->left = newnode(100); 
    root->left->right->right = newnode(200);
    root->right->left->right = newnode(300);
    root->right->right ->right = newnode(400); 
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
    int height = heightoftree(root)+1;
    printf("height %d\n",height );

    /* Calling current level function, by passing levels one by one. */

    int fromright;
    int fromleft;


    for(i = 1; i <= height; i++)       
    {   
    
             if (i%2 == 0)  //for even level travserse from left ->
             {
                  fromleft = 1;
                  fromright = 0;

                  currentlevel(root,i,fromleft,fromright);
             }
             else
             {   //for odd level travserse from right <-

                  fromleft = 0;
                  fromright = 1;

                  currentlevel(root,i,fromleft,fromright);

             }
     

    }
 
  

    return 0; 
}