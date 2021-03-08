
#include <stdio.h> 
#include <stdlib.h> 
//Write Code to Determine if Two Trees are Identical

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




int identicalTrees(struct node *a, struct node *b) 
{ 
    /*1. both empty */
    if (a == NULL && b == NULL) 
        return 1; 
  
    /* 2. both non-empty pointers-> compare them */
   if (a != NULL && b != NULL) 
    { 
        
        if (a->data == b->data && identicalTrees(a->left, b->left) && identicalTrees(a->right, b->right))
        {
       return 1;      

        }          

    } 
      
    return 0; 
}

void printpreorder(struct node *root) 
{ 
   if (root == NULL) 
      return; 
//1)
   printf("%d ", root->data); 
 
//2)
   printpreorder(root->left);

//3)
   printpreorder(root->right); 
} 






int main() 
{ 
  struct node *root = newnode(26); 
  root->left     = newnode(10); 
  root->right  = newnode(3); 
  root->left->left = newnode(4); 
  root->left->right = newnode(6); 
  root->right->right = newnode(3); 

 struct node *root1 = newnode(26); 
  root1->left     = newnode(10); 
  root1->right  = newnode(3); 
  root1->left->left = newnode(4); 
  root1->left->right = newnode(6); 
  root1->right->right = newnode(3); 


   printf("\npreorder traversal of binary tree is \n"); 
   printpreorder(root);
   printf("\n");
   printpreorder(root1);
   printf("\n");


    if(identicalTrees(root, root1)) 
        printf("Both tree are identical."); 
    else
        printf("Trees are not identical."); 
 


   return 0; 
} 

/*


Time Complexity:
Complexity of the identicalTree() will be according to the tree with lesser number of nodes.
 Let number of nodes in two trees be m and n then complexity of sameTree() is O(m) where m < n.

*/