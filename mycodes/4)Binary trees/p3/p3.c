
/* A binary tree node has data, left child and right child */

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



int add(struct node *p){
 if(p == NULL) 
    return 0; 

int sum = p->data +add(p->left)+add(p->right);
return sum;

}


int isSumTree(struct node *root) 
{ 
 
 /* If node is NULL or it's a leaf node then return true */
  if(root == NULL) 
    return 1; 

  /* If it's a leaf node then return true */
   if(root->left == NULL && root->right == NULL) 
    return 1;


//1) calculate sum of whole LST
int leftsum = add(root->left);
//2)calculate sum of whole RST
int rightsum = add(root->right);
//3)
int totalsum = leftsum + rightsum;
//printf("totalsum  %d\n",totalsum );

//4) check LST and RST has same property or not
if(root->data == totalsum){
      if( isSumTree(root->left) && isSumTree(root->right))
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



   printf("\npreorder traversal of binary tree is \n"); 
   printpreorder(root);
   printf("\n");

 
if(isSumTree(root)) 
    printf("\nThe given tree is a SumTree\n "); 
  else
    printf("\nThe given tree is not a SumTree\n ");

   return 0; 
} 



/*

https://www.geeksforgeeks.org/check-if-a-given-binary-tree-is-sumtree/

ref:
https://www.youtube.com/watch?v=zEIWqb8nWDk

Time Complexity ==O(n^2)


*/