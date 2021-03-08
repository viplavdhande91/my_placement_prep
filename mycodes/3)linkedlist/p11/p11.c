#include<stdio.h>
#include<stdlib.h>
//Add single digit to a number represented as linked list


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
      printf("%d  ",temp->data );
      temp = temp->next;
      }
   }
}


//function for finding 3rd node from the last of a linked list
void reverse(struct node *p){
 //1)
    if(p->next == NULL){
        head = p;
        return;
    }
 
    /* Calling reverse method recursively */
 //2)
    reverse(p->next);
 //3)   
     p->next->next = p;
 //4)
    p->next = NULL;
}



int work(int add){

temp =head;
int carry= 0;
int res;
int i = 0 ;

while(temp != NULL)
{
   if (i == 0){   //for first iter
         res  = temp->data + add ;
   }
   else{
         res  = temp->data + carry ;
         //carry=0;
   }

  
   temp->data = res % 10; //add Least digit 
   carry = res/10;   //append Most digit 
   
   temp = temp->next;

   i++;
 


}

return carry;
}




int main(){
   //creating list
   //inserting elements into a list
   insert(9);
   insert(9);
   insert(9);
   insert(8);


   //displaying the list
   printf("\nOrignal linked list is : ");
   display();

   temp = head;
   int add = 5;
//step1) reverse list

   reverse(head);
//step2) received carry
   int carry = work(add);  //if answer digit is increasing

   printf("\n");
   
//step3) temp always points to n th node before insertion(As per our insertion implementation.)
   temp = head;

   while (temp->next != NULL)
   {
    temp = temp->next;
   }
   
   insert(carry);   // add carry to last of Linked List


    display();
    printf("\n");

//step4) reverse list
   reverse(head);
   printf("\nAfter Number adding linked list is : ");

   display();



   return 0;
}