#include<stdio.h>
#include<stdlib.h>
//Algorithm to Delete last occurrence of an item from linked list



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




int main(){
   //inserting elements into a list
   insert('B');
   insert('A');

   insert('C');
   insert('D');

   insert('E');
      insert('A');

   //displaying the list
   printf("\nlinked list is : ");
   display();

   

   char key = 'A';
   

   struct node *prev = head;
   struct node *curr =head ;

//step1)count no of occureneces of key    
   int keycount = 0;
   while(curr){
    
    if (curr ->data == key){
      keycount++;
    }
    curr = curr->next;

   }



//capturing exact pointer of node
  
   curr = head;

    while(keycount)
    {
    
    if (curr ->data == key){
      keycount--;

      if(keycount == 0){ //because this is last occurence
         break;
      }
   
    }
    curr = curr->next;
    }


 printf("\n");
//step3)setting target

curr->data = '#';  // by # we setting target




if(curr->next == NULL){

//step4)
//case1 if it is last node
   struct node *t2 = head;


while(t2->next->data != '#'){

    t2 =t2->next;

   }
  
   free(curr);
   t2->next = NULL;

}
else{

//case2 if key is midlle node

   struct node *t1 = head;

   while(t1->next->data != '#')
   {
    t1 =t1->next;
   }

   t1->next = t1->next->next;
   free(curr);

}



printf("After Deleting last occurence of node :\n");

   display();


   return 0;
}