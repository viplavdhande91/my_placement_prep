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

   insert('A');
   insert('E');

   //displaying the list
   printf("\nlinked list is : ");
   display();

   

   char key = 'A';
   

   struct node *curr =head ;

//step1)count no of occureneces of key    
   int keycount = 0;
   while(curr)
   {
    
    if (curr ->data == key)
    {
      keycount++;
    }

    curr = curr->next;

   }



 //step2)capturing prev pointer before our target node
   //prev = NULL;
   curr = head;


    while(keycount)
    {
    
        if (curr ->next->data == key)
        {
              keycount--;

              if(keycount == 0) //because this is last occurence
                break;
            
       
        }

    curr = curr->next;

    }


 printf("Before target data :  %c\n",curr->data);

//step3)

  struct node *t1 = curr->next;

  curr->next = t1->next;
  free(t1);







printf("After Deleting last occurence of node :\n");

   display();


   return 0;
}