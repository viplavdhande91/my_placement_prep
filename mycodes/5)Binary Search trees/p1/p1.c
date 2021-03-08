#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h>
/* Check for BST */


struct node 
{ 
   struct node *left; 
   int data; 
   struct node *right; 
}; 


static int globalvar = 0;
int arr[6];
static int i = 0;






int* printInorder(struct node *root) 
{ 
   if (root == NULL) 
      return 0;

//1)
   printInorder(root->left); 
//2)
   arr[i] = root->data;
   i++;
   printf("%d ", root->data);
  

//3)
   printInorder(root->right); 
 
  
return arr;


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

   root =newnode(50);
   
                 
   root->left= newnode(15); 
   root->right = newnode(62); 
        

   root->left->left   = newnode(5); 

   root->left->right = newnode(20);

   root->right->left = newnode(58);


   printf("\nInorder traversal of binary tree is \n"); 

   int *p = printInorder(root); //pointer of array captured
   
   printf("\n");


   int mycheck = 0;

   int k = INT_MIN;

   for (int i = 0; i < 6; ++i)
   {
     printf("%d\n" ,*(p+i));

     if (*(p+i) > k){

          mycheck = 1;

          k = *(p+i); 
     }
     else
     {
   
         mycheck = 0;
         break;     

     }
   }
  
  printf("\n");

  printf("mycheck :  %d\n",mycheck); //if 1 =YES,0=NO
  

   return 0; 
} 



/* 

Time complexity of the above code is O(n) where n is number of nodes in given binary tree.



*/