// Check whether a binary tree is a full binary tree or not

#include <stdio.h> 
#include <stdlib.h> 

/* A binary tree node has data, pointer to left child and a pointer to right child */
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


int work(struct node *root){


// If empty tree 
    if (root == NULL) 
        return 1; 
  
    // If leaf node 
    if (root->left == NULL && root->right == NULL) 
        return 1; 
  
    // If both left and right are not NULL, and left & right subtrees are full 
    if ((root->left) && (root->right)) 
                 //1                //2
         return work(root->left) && work(root->right);
        
     
    // We reach here when none of the above if conditions work 
    return 0; 




}



int main() 
{ 
   struct node *root = newnode(1); 
   
   //printf("%d", root->data);
                 
   root->left= newnode(2); 
   root->right = newnode(3); 
        

   root->left->left   = newnode(4); 
   root->left->right = newnode(5);




   printf("\nInorder traversal of binary tree is \n"); 
   printInorder(root); 
   
   if (work(root)) 
        printf("\nfull\n"); 
    else
        printf("\nnot full\n"); 
  
   return 0; 
} 



/* 

Time complexity of the above code is O(n) where n is number of nodes in given binary tree.



*/