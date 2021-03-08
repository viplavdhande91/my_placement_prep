/* C Program for LCA(longest common ancestor) & distance(between two nodes)

https://www.youtube.com/watch?v=F-_1sbnPbWQ&ab_channel=VivekanandKhyade-AlgorithmEveryDay

*/ 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int info;

    struct node *right; 

};



struct node* lca(int n1,int n2,struct node *root){

 if (root == NULL){

    return NULL;
 }

 if (n1 == root->info || n2 == root->info)
 {
     
     return root;
 }

 struct node *left = lca(n1,n2,root->left);

 struct node *right = lca(n1,n2,root->right);

  
if (left != NULL && right != NULL)
{
    return root;
}

else
{

    return (left? left :right);

}

}







struct node *createnode(int key)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return(newnode);
}






int dist_from_lca(int n,struct node *root,int dist){

     if (root == NULL)
     {
        return -1;
     }
    
    if (root->info == n) {
        return dist;
    }

    int left = dist_from_lca(n,root->left , dist + 1);
    int right = dist_from_lca(n,root->right, dist + 1);
    

    return left>right? left:right;




}


int main() 
{   
   /* Creating first Tree. */
    struct node *newnode = createnode(25); 
    newnode->left = createnode(19); 
    newnode->right = createnode(27); 
    newnode->left->left = createnode(17); 
    newnode->left->left->left = createnode(15);
    newnode->right->right = createnode(91);
    newnode->right->right->left= createnode(55); 
    /* Sample BST :
     *                25
     *             /    \  
     *            19    27
     *           /       \ 
     *         17         91
               /          /
             15         55
     */
    int n1 =17;
    int n2 =55;
 
   //step1)find LCA 
    struct node *lca_ptr = lca(n1,n2,newnode);

    int dist = 0;
    
    //step2) distance = lca to n1 +  lca to n2
    int d1 = dist_from_lca(n1,lca_ptr,dist);
    int d2 = dist_from_lca(n2,lca_ptr,dist);



    printf("LCA is %d\n",lca_ptr->info);

    printf("distance is : %d\n",d1+d2 );


    


    

    return 0; 
}