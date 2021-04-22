//Write a function to delete a linked list.
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
void insert(int val){
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
void display(){
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


struct node *t1 = head;

while(head != NULL){

   head = t1->next;

   free(t1);
   
   t1 = head;


}

}





int main(){
   //creating list
   //inserting elements into a list
   insert(10);
   insert(20);
   insert(30);
   insert(40);
   insert(50);
   insert(60);

   //displaying the list
   printf("\nOrignal linked list is : ");
   //calling function for finding nth element in a list from last
   display();

  
   printf("\n");

   delete();

   display();



 

   return 0;
}