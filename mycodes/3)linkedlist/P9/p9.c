#include<stdio.h>
#include<stdlib.h>
//Algorithm to delete middle node


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
   for(i=0;i<(count/2)-1;i++){
      temp=temp->next;
   }

   struct node *t1 = temp; //create new pointer
   temp = temp->next;  //move temp 1 step ahead i.e at exact middle

   t1->next = temp->next;  //copy element
   free(temp);           //free pointer


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
   work();
   
   printf("\n");
   display();

   return 0;
}