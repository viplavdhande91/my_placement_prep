//Delete N nodes after M nodes of a linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
}
*head,*temp;
int count=0;




//function for inserting nodes into a list
void insert(int val)
{
   struct node *newnode = (struct node*) malloc(sizeof(struct node));
   newnode->data = val;
   newnode->next = NULL;
   
   if(head == NULL){
      head = newnode;
      temp = head;
      count++;
   } else {
      temp->next=newnode;
      temp=temp->next;
      count++;
   }
}



//function for displaying a list
void display()
{
   if(head==NULL)
      printf("no node ");
   else {
      temp=head;
      for (int i = 0; i < count; i++)
      {
      printf("%d  ",temp->data );
      temp = temp->next;
      }
   }
}



void delete()
{

struct node *t1 = temp->next;

temp->next = t1->next;
free(t1);

}



void work(int m ,int n)
{
      
      int firsttime = 1;
      temp = head;

      while(temp != NULL)
      {
                 // printf("kitne \n");

               if (firsttime == 1) //for first time m-1 steps we have to move to point 3
               {     
                       // printf("ispe \n");
                           firsttime = 0;

                           temp = head;
                           int mcache = m-1;

                           //m-1 movement temp forwards i.e m-1 skips
                           while(mcache)
                           {

                            temp = temp->next;
                            mcache--;

                           }

                           //n deletions
                           for(int i = 0;i<n;i++)
                           {
                              delete();
                           }


                }
          
                else     //from second time and onwards m steps we need to move forward to point 8
                {
                           int mcache = m;
                           
                           //m-1 movement temp forwards i.e m-1 skips
                           while(mcache)
                           {

                               temp = temp->next;

                               if (temp == NULL)
                                 {
                                    return;
                                 }
                              
                               mcache--;

                           }

                           
                           //n deletions
                           for(int i = 0;i<n;i++)
                           {
                              delete();
                           }

                }






      }
      


//printf("temp->data : %d\n",temp->data );

}

int main(){
   //creating list
   //inserting elements into a list
   insert(1);
   insert(2);
   insert(3);
   insert(4);
   insert(5);
   insert(6);
   insert(7);
   insert(8);
   insert(9);
   insert(10);

   //displaying the list
   printf("\nOrignal linked list is : ");
   //calling function for finding nth element in a list from last
   display();

   int m = 1;
   int n = 1;
   work(m,n);

  
   printf("\n");

   printf("\nAfter operation linked list is : ");

   display();



 

   return 0;
}