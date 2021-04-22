/* C Program key search in BST */ 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;

    struct node *right; 

};




struct node* search_bst(int key,struct node* root)
{

    //corner case
    if (root == NULL )
    {
        return 0;
    }

    if(root->data == key)
    {

        return root;
    }

     

    // Key is greater than root's key

    if (key > root->data)
    {
        //1
        return search_bst(key,root->right);
    }
    else
    {
        // 2
        return search_bst(key,root->left);

    }
   

   


}








struct node* newnode(int data)   
{ 
   struct node  *p = (struct node *) malloc(sizeof(struct node)); 
   p->data = data; 
   p->left = NULL; 
   p->right = NULL; 

   return p; 
} 

int main() 
{   
   /* Creating first Tree. */
    struct node *root = newnode(25); 
    root->left = newnode(19); 
    root->right = newnode(27); 
    root->left->left = newnode(17); 
    root->left->left->left = newnode(15);
    root->right->right = newnode(91);
    root->right->right->left= newnode(55); 
    /* Sample BST :
     *                25
     *             /    \  
     *            19    27
     *           /       \ 
     *         17         91
               /          /
             15         55
     */
    printf("Status : \n");
    
    int key = 227;
    struct node *res = search_bst(key,root);
    
   printf("res : %d\n",res );

   if (res == 0)
   {
        printf("Key %d not Exists\n",key);
   }

   else if (res->data == key){

      printf("key %d Exists\n",key);

    }
   


    

    return 0; 
}