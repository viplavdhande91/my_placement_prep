// C program to detect loop in a linked list 
#include<stdio.h>
#include<stdlib.h>


struct node{
   char data;
   struct node *next;
}
*head,*temp;
int count = 0;




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



int detectLoop(struct node *p) 
{ 
   struct node *slow_p = p; 
   struct node *fast_p = p;

   while (slow_p && fast_p && fast_p->next && slow_p->next)
    { 
            slow_p = slow_p->next; 
            fast_p = fast_p->next->next; 

            if (slow_p == fast_p) 
            { 
               return 1; 
            } 
    } 


   return 0; 
} 

int main(){
   //creating list
   //inserting elements into a list
   insert('A');
   insert('B');
   insert('C');
   insert('D');
   insert('E');

   temp ->next = head;

   //displaying the list
   printf("\nlinked list is : ");
   display();
   
/* Create a loop for testing */

 if (detectLoop(head)) 
      printf("\nLoop found"); 
   else
      printf("\nNo Loop");



   return 0;
}

/*

Solution 3: Floyd’s Cycle-Finding Algorithm
Approach: This is the fastest method and has been described below:

Traverse linked list using two pointers.
Move one pointer(slow_p) by one and another pointer(fast_p) by two. 
If these pointers meet at the same node then there is a loop.
 If pointers do not meet then linked list doesn’t have a loop.



Complexity Analysis:

Time complexity: O(n).
Only one traversal of the loop is needed.

Auxiliary Space:O(1).
There is no space required.


https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/




*/