#include<stdio.h>
#include<stdlib.h>
//Algorithm to find the intersection point of two linked lists

//structure of a node
struct node{

char data;
struct node *next;
}
*head,*temp,*head1,*temp1,*head2,*temp2;

int count0=0;
int count1=0;
int count2=0;


//function for inserting nodes into a list
void insert0(char val){
   struct node *newnode = (struct node*) malloc(sizeof(struct node));
   newnode->data = val;
   newnode->next = NULL;

   if(head == NULL){
      head = newnode;
      temp = head;
      count0++;
   } else {
      temp->next=newnode;
      temp=temp->next;
      count0++;
   }
}


//function for inserting nodes into a list
void insert1(char val){
   struct node *newnode = (struct node*) malloc(sizeof(struct node));
   newnode->data = val;
   newnode->next = NULL;

   if(head1 == NULL){
      head1 = newnode;
      temp1 = head1;
      count1++;
   } else {
      temp1->next=newnode;
      temp1=temp1->next;
      count1++;
   }
}

//function for inserting nodes into a list
void insert2(char val){
   struct node *newnode = (struct node*) malloc(sizeof(struct node));
   newnode->data = val;
   newnode->next = NULL;

   if(head2 == NULL){
      head2 = newnode;
      temp2 = head2;
      count2++;
   } else {
      temp2->next=newnode;
      temp2=temp2->next;
      count2++;
   }
}
//function for displaying a list
void display0(){
   if(head==NULL)
      printf("no node in LL1 ");
   else {
      temp=head;
      printf("\nlinked list 1st is : ");

      while(temp!=NULL) {
         printf("%c ",temp->data);
         temp=temp->next;
      }



   }
}



//function for displaying a list
void display1(){
   if(head1==NULL)
      printf("no node in LL2 ");
   else {
      temp1=head1;
      printf("\nlinked list 2nd is : ");

      while(temp1!=NULL) {
         printf("%c ",temp1->data);
         temp1=temp1->next;
      }



   }
}


//function for displaying a list
void display2(){
   if(head2==NULL)
      printf("no node in LL3 ");
   else {
      temp2=head2;
      //printf("\nlinked list 3rd is : ");

      while(temp2!=NULL) {
        // printf("%c ",temp2->data);
         temp2=temp2->next;
      }



   }
}




int main(){
   //creating list

   //inserting elements into a list
   insert0('a');
   insert0('b');
   insert0('c');
   insert0('d');

   insert1('m');
   insert1('n');

   insert2('e');
   insert2('f');
   insert2('g');
  


     

 //making linked list joining and creation of intersection element  
   temp->next = head2;
   temp1->next = head2;
     

   //displaying the list
   display0();
   display1();

//step1 & 2)   
   int d = abs(count0 - count1);

//step3) crossing d distances
   if(count0 > count1)  //first LL is longer
   {

      for (int i = 0; i < d; ++i)
      {
         head = head->next;
      }
     

   }
   else          //second LL is longer
   {


      for (int i = 0; i < d; ++i)
      {
         head1 = head1->next;
      } 
        

   }

//step4)

   while(head1->data != head->data)
   {
               head = head->next;
               head1 = head1->next;


   }

       printf("\n");
       printf("The intersection element is %c ",head1->data);


   return 0;
}



/*

Time Complexity: O(m+n)  where m & n are sizes of both lists
Auxiliary Space: O(1)

 */