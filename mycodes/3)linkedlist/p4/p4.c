#include<stdio.h>
#include<stdlib.h>
//Algorithm to reverse linked list(recursive)


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



void reverse(struct node *p){

    if(p->next == NULL){
        head = p;
        return;
    }
 
 
//from (n-1)th node to backwards
 //1)
    reverse(p->next);
 //2)   
     p->next->next = p;
 //3)
    p->next = NULL;
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
   
   reverse(head);
   printf("\nreversed linked list is : ");

   display();

   return 0;
}