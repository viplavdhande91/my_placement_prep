// C program to detect loop in a linked list and if 
//loop exists find starting node of a loop in a linked list
#include<stdio.h>
#include<stdlib.h>



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
      temp->next = newnode;
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



void detectLoop(struct node *p) 
{ 
    
    int check = 0;

   struct node *slow_p = p; 
   struct node *fast_p = p;

   while ( slow_p && fast_p && fast_p->next && slow_p->next)
   { 
      slow_p = slow_p->next; 
      fast_p = fast_p->next->next; 

      if (slow_p == fast_p) {

         check = 1;
         break;
      } 

   } 

  
//main algo starts from here

//step1)
   slow_p = head; 


//step2)
   while(slow_p != fast_p)
   { 
      printf("\n");

      slow_p = slow_p->next;
      fast_p = fast_p->next;    
    }

      


 if (check == 1) {
      printf("\nLoop found"); 
      printf("\n");

      printf("slow_p points to loop: %d\n",slow_p->data );
      printf("\n");
      printf("fast_p points to loop: %d\n",fast_p->data );
}
   else
      printf("\nNo Loop");

 //step3)Extra :loop length count {How many nodes are present in loop?0}

 int loop_count = 1;
 int first_data = slow_p->data;

struct node *lr = slow_p->next;



 while(first_data != lr->data)
 {

   loop_count++;

   lr = lr->next;

 }
   
printf("loop_count is %d\n",loop_count );

} 



int main(){
   //creating list
   //inserting elements into a list
   insert(1);
   insert(2);
   insert(3);
   insert(4);
   insert(5);

   //displaying the list
   printf("\nlinked list is : ");
   display();
   
   temp =head;

   struct node *p1;
/* Create a  testing loop */

   while(temp->next != NULL){
      if (temp->data == 2)
      {
         p1 = temp;
      }
      
      temp = temp->next;

      
   }

   printf("\ntemp : %d",temp->data );
   printf("\np : %d",p1->data );

   temp->next = p1; 

   detectLoop(head);



   return 0;
}

/*

Complexity Analysis:

Time complexity: O(n) + O(n) =O(n)


https://www.geeksforgeeks.org/find-first-node-of-loop-in-a-linked-list/


Actual Algorithm after loop detection :

1. If a loop is found, initialize, slow = head, let fast pointer be at its position. 
2. Move both slow and fast pointers one node at a time. 
3. The point at which they meet is the start of the loop.


4)when slow ==fast again meets at second time.thats the first node of loop.
here catch is second time meet.

{Dont go for extra logic ..just remember it}


*/