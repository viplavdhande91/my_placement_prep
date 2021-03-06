// C program for Find Minimum Depth of a Binary Tree


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


int min(int n1,int n2){


if(n1 > n2){

   return n2;
}
else{

return n1;

}


}






int mindepth(struct node *root) 
{ 
    if (root == NULL) 
        return 0; 
  
    //  Leaf Node. This accounts for height = 1. 
    if (root->left == NULL && root->right == NULL) 
    return 1; 
  



    // 1) If left subtree is NULL, probe for right subtree : type 1 node
    if (root->left == NULL && root->right) 
        return 1 + mindepth(root->right) ; 
  
    // 2) If right subtree is NULL, probe for left subtree :type2 node
    if (root->right ==NULL && root->left) 
        return 1 + mindepth(root->left) ; 
  
   //3)both pointer has something   :type3 node
    return 1 + min(mindepth(root->left), mindepth(root->right)); 




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
   printf("\nmindepth is:  %d\n",mindepth(root)); 

   return 0; 
} 



/* 

Time complexity of above solution is O(n) as it traverses the tree only once.


*/