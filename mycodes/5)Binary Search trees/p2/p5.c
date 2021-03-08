
#include <stdio.h> 
#include <stdlib.h> 
//Lowest Common Ancestor in a Binary Search Tree.


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



struct node*  work(struct node *root,int n1 ,int n2){

 if (root == NULL) return NULL; 
  
    // If both n1 and n2 are smaller than root, then LCA lies in left

    //1) 
    if (root->data > n1 && root->data > n2) 
        return work(root->left, n1, n2); 
  
    // If both n1 and n2 are greater than root, then LCA lies in right 

      //2)
    if (root->data < n1 && root->data < n2) 
        return work(root->right, n1, n2); 
  
    return root; 



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
   struct node *root = newnode(20); 
    root->left  = newnode(8); 
    root->right  = newnode(22); 
    root->left->left = newnode(4); 
    root->left->right = newnode(12); 
    root->left->right->left = newnode(10); 
    root->left->right->right = newnode(14); 
  


   printf("\npreorder traversal of binary tree is \n"); 
   printpreorder(root);
    int n1 = 10, n2 = 14; 

    struct node *t = work(root, n1, n2); 
        printf("\n");
    printf("LCA of %d and %d is %d \n", n1, n2, t->data); 
  
    n1 = 14, n2 = 8; 
    t = work(root, n1, n2); 
    printf("LCA of %d and %d is %d \n", n1, n2, t->data); 
  
    n1 = 10, n2 = 22; 
    t = work(root, n1, n2); 
    printf("LCA of %d and %d is %d \n", n1, n2, t->data); 


   return 0; 
} 

/*

Algorithm:

Create a recursive function that takes a node and the two values n1 and n2.
If the value of the current node is less than both n1 and n2, then LCA lies in the right subtree. Call the recursive function for thr right subtree.
If the value of the current node is greater than both n1 and n2, then LCA lies in the left subtree. Call the recursive function for thr left subtree.
If both the above cases are false then return the current node as LCA.


Complexity Analysis:

Time Complexity: O(h).
The time Complexity of the above solution is O(h), where h is the height of the tree.


Space Complexity: O(1).
If recursive stack space is ignored, the space complexity of the above solution is constant.

*/