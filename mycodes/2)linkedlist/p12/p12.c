// C program to detect loop in a linked list and if loop exists remove it
#include<stdio.h>
#include<stdlib.h>


struct node
{
   char data;
   struct node *next;
}
*head,*temp;
int count=0;




//function for inserting nodes into a list
void insert(char val)
{
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
void display()
{
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
void detectLoop(struct node *p) 
{ 

 //step1)detect the loop first 
    
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

  printf("check %d\n",check );
//main algo starts from here


//step2)
 if (check == 1)
    {
                    printf("\nLoop found"); 
                    printf("\n");



                    slow_p = head; 
                    struct node *prev = head;


              //step1)start of loop findout  
                 while(slow_p != fast_p)
                 {      

                    slow_p = slow_p->next;
                    fast_p = fast_p->next;
                  
                  }

                     printf("start of loop: %c\n",slow_p->data );
                  

              //step2)end of loop findout  

                  struct node *t1 = slow_p;

                  while(t1->next->data != slow_p->data)
                    {

                     t1 = t1->next;
                    }
                    
                    printf("end of loop: %c\n",t1->data );
               
               //step3)setting NULL at last


                    t1->next = NULL;  //setting NULL
                   
                   if (t1->next == NULL)
                   {
                    printf("\nLoop removed");
                   }
    }
   else
   {

             printf("\nNo Loop found");
   }

 







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
   
/* Create a loop for testing */

   head->next->next->next->next->next = head; 
   //printf("%c\n",head->data );
   detectLoop(head);



   return 0;
}

