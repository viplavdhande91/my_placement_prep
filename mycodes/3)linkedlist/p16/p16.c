//Delete N nodes after M nodes of a linked list

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



void delete(){

temp= head;

while(head != NULL){

   head= temp->next;
   free(temp);
   temp =head;


}

}



void work(int m ,int n){

temp =head;

//step1)linked list to array
int arr[count];

for (int i = 0; i < count; ++i)
{
   arr[i] = temp->data;
   temp = temp->next;
}

   printf("\n" );



int loopvar = n;

 int i = 0;
  
  
//step2) insert 99999 where we have to perform deletions


int len = sizeof(arr)/sizeof(arr[0]);
int outerloop = len/(m+n);

 i = m;

int innerloop = n;


while(outerloop){


     while(innerloop){



      if (innerloop == 1)
      {
        innerloop = n;
         arr[i] = 99999;
         break;

      }
      else{
         arr[i] = 99999;
         i++;

          }

      innerloop--;
      
      }

i+= m+n-1;

outerloop--;




}

// step3 delete previous list
delete();

//s4 insert all arr elements into new list

int looping =count;
for (int i = 0; i < looping; ++i)
{  
   struct node *head = NULL;
   if (arr[i] != 99999){
      insert(arr[i]);
   }
}


}

int main(){
   //creating list
   //inserting elements into a list
   insert(1);
   insert(2);
   insert(3);
   insert(4);
   insert(5);
   insert(6);
   insert(7);
   insert(8);
   insert(9);
   insert(10);

   //displaying the list
   printf("\nOrignal linked list is : ");
   //calling function for finding nth element in a list from last
   display();

   int m = 2;
   int n = 2;
   work(m,n);

  
  printf("\n");

   printf("\n after operation linked list is : ");

   display();



 

   return 0;
}