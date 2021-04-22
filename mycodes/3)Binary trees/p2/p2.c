// C program to convert a binary tree  to its mirror 

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



void mirror(struct node *p) 
{ 
if (p==NULL) 
  return; 
else
{ 
  struct node *temp; 
  
  /* do the subtrees */
   //1) 
  mirror(p->left);
   //2)
  mirror(p->right);

  /* swap the pointers in this node */
  //3)
   temp   = p->left;
  //4) 
   p->left = p->right;
   //5)
   p->right = temp;
} 
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






int main() 
{ 
   struct node *root = newnode(1); 
   
   //printf("%d", root->data);
                 
   root->left= newnode(3); 
   root->right = newnode(2); 
        

   root->right->left   = newnode(5); 
   root->right->right = newnode(4);




   printf("\nInorder traversal of binary tree is \n"); 
   printInorder(root); 
   mirror(root); 

    printf("\n");
   printInorder(root); 

   return 0; 
} 





/* 
Time complexity =  O(n) {mirror function visits each node twice}
Space Complexity = O(1)  
https://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/
*/