
#include<stdio.h>
#include<stdlib.h>
//Implementation of Queue using Linked List
//https://www.youtube.com/watch?v=RN1wzY_tnYU&ab_channel=Jenny%27slecturesCS%2FITNET%26JRF
/*
enqueue = O(1)

deque = O(1)

delete from front side i.e start of Linked list


insert from rear side i.e from end of Linked list and extend list from end

*/


struct node{
   char data;
   struct node *next;
}

*head,*front,*rear,*temp;
int count = 0;




//function for inserting nodes into a list
struct node* enqueue(char val){
   //creation of new node
   struct node *newnode = (struct node*) malloc(sizeof(struct node));
   
   newnode->data = val;
   
   newnode->next = NULL;
   


   if(head == NULL){ //for first insertion
      head = newnode;
      rear = head;
      count++;
   } 
   else {                        //for remaining n -1 insertions
      rear->next = newnode;
      rear = rear->next;
      count++;
   }

return rear;
}


void deque(){


head = head->next;

free(front);

front =head;




}



//function for displaying a list
void display(){
   if(head==NULL)
      printf("no node ");
   else {
      temp=head;
      while (temp != NULL)
      {
      printf("%c  ",temp->data );
      temp = temp->next;
      }
   }
}





int main()

{
       //creating list
       int n=3;
       //inserting elements into a list
       struct node * p_r;
        p_r =  enqueue('A');
        p_r =  enqueue('B');
        p_r =  enqueue('C');
        p_r =  enqueue('D');
        p_r =  enqueue('E');

    
        printf("rear is %c\n",p_r->data );
        
        printf("linked list is : ");
        display();
        printf("\n");


        deque(); //first deque of A
        p_r =  enqueue('F');
        p_r =  enqueue('G');
        




        printf("\nrear is %c\n",p_r->data );
        printf("linked list is : ");
        display();
        printf("\n");



        deque(); //second deque of B
        p_r =  enqueue('H');



        printf("\nrear is %c\n",p_r->data );

        printf("Linked list is : ");
        display();

        printf("\n");



       return 0;
}