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



int i = 0; //global variable


void Inorder(struct node *root,int arr[]) 
{ 
   if (root == NULL) 
      return ;

//1)
   Inorder(root->left,arr); 
//2)
   //printf("item :%d\n", root->data);
   arr[i++] = root->data;


//3)
   Inorder(root->right,arr); 
 
  

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

   root = newnode(50);
   
                 
   root->left= newnode(15); 
   root->right = newnode(62); 
   root->left->left   = newnode(5); 

   root->left->right = newnode(20);

   root->right->left = newnode(58);


   printf("\nInorder traversal of binary tree is \n");

   
   static int arr[6];
   
   Inorder(root,arr); //pointer of array captured

//print the array
   for (i = 0; i < 6; ++i)
   {
     printf("%d\t",arr[i] );
   }


//check got array is sorted or not
   int mycheck = 1;   //assume it as true

   int size = sizeof(arr)/sizeof(int);
   
   int p1 = 0;
   int p2 = 1;

   for (int p = 0; p < size-1; ++p)
   {
      
      if (arr[p1] <= arr[p2])
       {

       } 
       else
       {
        mycheck = 0;
        break;
       }
    
    p1++;
    p2++;

   }
   


  switch(mycheck)
  {
  
  case 0:
  printf("\nNOT A BST\n");
  break;

  case 1:
  printf("\nBST\n");
  break;
  
  default:
  printf("error\n");
  break;


  }
  

   return 0; 
} 



/* 

Time complexity of the above code is O(n) where n is number of nodes in given binary tree.



*/