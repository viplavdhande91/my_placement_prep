// C program for different tree traversals 

//Implement Inorder traversal with stack and recursion

#include <stdio.h> 
#include <stdlib.h> 

/* A binary tree node has data, pointer to left child 
and a pointer to right child */
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


void Inorder(struct node *root) 
{ 
   if (root == NULL) 
      return; 
//1)
   Inorder(root->left); 
//2)
   printf("%d ", root->data); 
//3)
   Inorder(root->right); 
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
   Inorder(root); 

   return 0; 
} 



/* 

Time Complexity: O(n) //as per gate notes


*/