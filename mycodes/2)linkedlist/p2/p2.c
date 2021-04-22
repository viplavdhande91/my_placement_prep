#include<stdio.h>
#include<stdlib.h>
//Algorithm to find the nth node from end of the linked list structure of a node


struct node{
   char data;
   struct node *next;
}
*head,*temp;
int count=0;




//function for inserting nodes into a list
void insert(char val){
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
      printf("%c  ",temp->data );
      temp = temp->next;
      }
   }
}



void work(){
   int i;
   temp=head;
   for(i=0;i<count/2;i++){
      temp=temp->next;
   }
   printf("\nMiddle node's in the given Linked list is %c" ,temp->data);
}


int main(){
   //creating list
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
   work();
   return 0;
}

//Time Complexity = O(n)