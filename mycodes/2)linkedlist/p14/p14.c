
#include<stdio.h>
#include<stdlib.h>
//Rotate a Linked List by k nodes

struct node
{
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
void display()
{
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







void work(int k)
{


temp = head;


//step1) go to 60 and make loop
while(temp->next != NULL)
{


   temp =temp->next;
}

temp->next =head;



//step2) make temp pointing to 40

temp = head;

int loopvar = k-1;


while(loopvar)
{

temp = temp->next;

loopvar--;
}

printf("\ntemp->data  : %d\n",temp->data );


//step3) set head to 50 

head = temp->next;


//step4)make 40->next to NULL

temp->next= NULL;

}





int main()
{
         //creating list
         //inserting elements into a list
         insert(10);
         insert(20);
         insert(30);
         insert(40);
         insert(50);
         insert(60);

         int  k = 4;

         //displaying the list
         printf("\nOrignal linked list is : ");
         //calling function for finding nth element in a list from last
         display();

         work(k);
        
         printf("\n");

         display();



       

         return 0;
}