// C program to Reverse alternate K nodes in a Singly Linked List
#include<stdio.h>
#include<stdlib.h>


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


int work(int k) 
{ 
   char arr[count];

   struct node *p;
//step1) scan the list and fill stack array k times
   
   int indexcount = 0;

   if(head == NULL)
      printf("no node ");

   else 
   {
      p = head;
    
    for (int i = 0; i < k; ++i)
      {
         arr[indexcount] = p->data;
         p->data = '#';
        
         indexcount++;
         p=p->next;     

          }      
       
        
      
    } 
  




//step2)assign (from ending) of array to linked list(from starting) i.e k times reinsertion from start
     p = head;

     int last_index = k-1;

     for (int i = 0; i < k; i++)
     {
        p->data = arr[last_index];
        p = p->next;
        last_index--;

      
      
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
   insert('F');
   insert('G');
   insert('H');



   //displaying the list
   printf("\nlinked list is : ");
   display();
 
   int k = 3;

   work(k);
printf("\n");
   display();

   return 0;
}

  


/*
OUTPUT

https://www.geeksforgeeks.org/reverse-alternate-k-nodes-in-a-singly-linked-list/

own method


Time Complexity = O(k)

Space Complextiy = O(n)  extra array space




Additnal ref


https://www.geeksforgeeks.org/reverse-an-array-in-groups-of-given-size/



contributed by Viplav Patil 

*/