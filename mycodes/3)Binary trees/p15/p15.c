/* C Program for left view of a Tree 

https://www.youtube.com/watch?v=AIokcTT0LuE&ab_channel=TECHDOSE

Algo

1)do pre order traversal and keep tracking of levels using cache array 


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


void preorder_with_array(struct node *t,int a[],int level)
{
            if (t == NULL) 
              return;


          if(a[level] == 0)
          {
              printf("%d\t",t->data );
              a[level] = 1;

          }

          
          preorder_with_array(t->left,a,level+1);

          preorder_with_array(t->right,a,level+1);




}





int main() 
{   
   /* Creating first Tree. */
    struct node *root = newnode(4); 
    root->left = newnode(5); 
    root->right = newnode(2);


    root->right->left = newnode(3); 
    root->right->right = newnode(1);

    root->right->left->left = newnode(6);
    root->right->left->right = newnode(7);

    
    
    printf("\nLEft view :\n");




    int i;
    int height = heightoftree(root)+1;
    
    int a[height];
   
    // initializing array elements same as static array
    for (int i = 0; i < height; ++i)
    {
        a[i] = 0;
    }
    
    
    int level = 0;

    preorder_with_array(root,a,level);


  

    return 0; 
}