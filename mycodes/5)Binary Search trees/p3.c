/* C Program key search in BST */ 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int info;

    struct node *right; 

};




struct node* search_bst(int key,struct node* root)
{

//corner case
    if (root == NULL || root->info == key)
    {
        return root;
    }

     

    // Key is greater than root's key

    if (key > root->info)
    {
        
        return search_bst(key,root->right);
    }
   

   // Key is smaller than root's key
    return search_bst(key,root->left);

    



}








struct node *createnode(int key)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return(newnode);
}



int main() 
{   
   /* Creating first Tree. */
    struct node *newnode = createnode(25); 
    newnode->left = createnode(19); 
    newnode->right = createnode(27); 
    newnode->left->left = createnode(17); 
    newnode->left->left->left = createnode(15);
    newnode->right->right = createnode(91);
    newnode->right->right->left= createnode(55); 
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
    
    int key = 27;
    struct node *res = search_bst(key,newnode);
    
  // printf("res : %d\n",res );

    if (res->info == key){

      printf("key %d Exists\n",key);

    }
    else{

        printf("Key %d Doesnt Exists\n",key);

    }


    

    return 0; 
}