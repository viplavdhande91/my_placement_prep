// count no of nodes in tree
#include <stdio.h> 
#include <stdlib.h> 

/* A binary tree node has data, pointer to left child and a pointer to right child */
struct node 
{ 
   struct node *left; 
   int data; 
   struct node *right; 
}; 





void printInorder(struct node *root) 
{ 
   if (root == NULL) 
      return; 
//1)
   printInorder(root->left); 
//2)
   printf("%d ", root->data); 
//3)
   printInorder(root->right); 
} 





int count(struct node *root){


// If empty tree 
    if (root == NULL) 
        return 0; 
  
    // If leaf node 
    if (root->left == NULL && root->right == NULL) 
        return 1; 
  
    // If both left and right are not NULL, and left & right subtrees are full 
    if (root) 
         return 1+count(root->left) + count(root->right);
    else{

       // We reach here when none of the above if conditions work 
    return 0; 

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
   struct node *root;

   root =newnode(1);
   
                 
   root->left= newnode(2); 
   root->right = newnode(3); 
        

   root->left->left   = newnode(4); 
   root->left->right = newnode(5);




   printf("\nInorder traversal of binary tree is \n"); 
   printInorder(root); 
   
  
  printf("\n");

  printf("No of nodes :  %d\n",count(root) ); 
  
   return 0; 
} 



/* 

Time complexity of the above code is O(n) where n is number of nodes in given binary tree.



*/