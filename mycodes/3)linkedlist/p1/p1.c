#include<stdio.h>
#include<stdlib.h>
//Algorithm to find the nth node from end of the linked list structure of a node


struct node{
   char data;
   struct node *next;
}

*head,*temp;
int count = 0;




//function for inserting nodes into a list
void insert(char val){
   //creation of new node
   struct node *newnode = (struct node*) malloc(sizeof(struct node));
   
   newnode->data = val;
   
   newnode->next = NULL;
   


   if(head == NULL){ //for first insertion
      head = newnode;
      temp = head;
      count++;
   } 
   else {                        //for remaining n -1 insertions
      temp->next = newnode;
      temp = temp->next;
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
      printf("%c  ",temp->data );
      temp = temp->next;
      }
   }
}



//function for finding 3rd node from the last of a linked list
void work(int n){
   int i;
   temp=head;
   for(i=0;i<count-n;i++){
      temp=temp->next;
   }
   printf("\n%drd node from the end of linked list is : %c" ,n,temp->data);
}



int main(){
   //creating list
   int n=3;
   //inserting elements into a list
   insert('A');
   insert('B');
   insert('C');
   insert('D');
   insert('E');
   //displaying the list
   printf("\nlinked list is : ");
   display();
   //calling function for finding nth element in a list from last
   work(n);
   return 0;
}