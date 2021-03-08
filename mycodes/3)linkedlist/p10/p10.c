
#include<stdio.h>
#include<stdlib.h>
//Remove duplicate element from sorted Linked List 

struct node{
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



void work()
{
temp = head;

struct node *current = head;

while(current->next != NULL)
{

      temp = current->next;

      if(current->data == temp->data)
      {

         current->next =temp->next;
         free(temp);

      }
      else
      {
         current = current->next;


      }


}

}




int main(){
   //creating list
   //inserting elements into a list
   insert(1);
   insert(2);
   insert(3);
   insert(3);
   insert(4);

 
   //displaying the list
   printf("\nOrignal linked list is : ");
   //calling function for finding nth element in a list from last
   display();

   work();
  
  printf("\n");

     printf("\nAfter removing duplicates linked list is : ");

   display();


 

   return 0;
}