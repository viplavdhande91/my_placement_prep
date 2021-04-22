/* C Program for LCA(lowest common ancestor) & distance(between two nodes) BST

https://www.youtube.com/watch?v=F-_1sbnPbWQ&ab_channel=VivekanandKhyade-AlgorithmEveryDay

*/ 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;

    struct node *right; 

};



struct node* lca(int n1,int n2,struct node *root)
{

 if (root == NULL){

    return NULL;
 }

 if (n1 == root->data || n2 == root->data)
 {
     
     return root;
 }

 
//1
 struct node *left = lca(n1,n2,root->left);

//2
 struct node *right = lca(n1,n2,root->right);

  //3
    if (left && right)
    {
        return root;       //1st case
    }

    else
    {

        return (left? left :right); //2,3,4 cases

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





int dist_from_lca(int n,struct node *root,int dist)
{

     if (root == NULL)
     {
        return -1;
     }
    
    if (root->data == n) 
    {
        return dist;
    }
    
    //1
    int lst = dist_from_lca(n,root->left , dist + 1);
    //2
    int rst = dist_from_lca(n,root->right, dist + 1);
    
   //3
    return lst>rst? lst:rst;




}


int main() 
{   
   /* Creating first Tree. */
    struct node *root = newnode(25); 
    root->left = newnode(19);
    root->left->right = newnode(38); 
 
    root->right = newnode(27); 
    root->left->left = newnode(17); 
    root->left->left->left = newnode(15);
    root->right->right = newnode(91);
    root->right->right->left= newnode(55); 
    /* Sample BT :
     *               25
     *             /    \  
     *            19    27
     *           /  \     \ 
     *         17   38    91
               /          /
             15         55
     */
    int n1 =17;
    int n2 =91;
 
   //step1)find LCA 
    struct node *lca_ptr = lca(n1,n2,root);
    printf("LCA is : %d\n",lca_ptr->data);

    int dist = 0;
    
    
    //step2) distance = lca to n1 +  lca to n2
    int d1 = dist_from_lca(n1,lca_ptr,dist);

    int d2 = dist_from_lca(n2,lca_ptr,dist);




    printf("distance is : %d\n",d1+d2 );


    


    

    return 0; 
}