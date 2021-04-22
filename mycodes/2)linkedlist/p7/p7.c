// C program to Function to check if a singly linked list is palindrome 
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


int work() 
{ 
   char arr[count];

   struct node *p;
//step1) scan the Linked list and fill stack array
   
   int indexcount = 0;

   if(head == NULL)
      printf("no node ");

   else 
   {
      p = head;
    
      while(p != NULL) 
      {
        // printf("%c\t ",temp->data);         
         arr[indexcount] = p->data;
        
         indexcount++;
         p = p->next;
        
      }
    } 
  


//step2)check pallindrome on array
    
    int i = 0;
     
    int palcheck =1;
    int j = (sizeof(arr)/sizeof(char)) - 1 ;

    while(i < j)
    {
       
           if (arr[i] == arr[j])
           {

              i++;
              j--;
           }
           else
           {
           
               palcheck = 0;
               break;

           }


    }

    
    if (palcheck == 1)
    {
       printf("\nPallindrome" );
    }
    else
    {
       printf("\nNot Pallindrome" );

    }

   return 0; 
} 



int main(){
   //creating list
   //inserting elements into a list
   insert('T');
   insert('E');
   insert('N');
   insert('E');
   insert('T');

   //displaying the list
   printf("\nlinked list is : ");
   display();
 

   work();


   return 0;
}
  


/*
OUTPUT


Time Complexity using simple stack method = O(n)

Space Complexity = O(n)




https://www.youtube.com/watch?v=jFJPyB6CNXY

https://www.geeksforgeeks.org/function-to-check-if-a-singly-linked-list-is-palindrome/



METHOD 1 (Use a Stack)
*/