#include<stdio.h>
#include<stdlib.h>
//Flattening a Linked List 

struct node{
   struct node *next;
   int data;
   struct node *bottom;
}

*head;
int count = 0;




//function for inserting nodes into a list
struct node* insert(int val){
   //creation of new node
   struct node *newnode = (struct node*) malloc(sizeof(struct node));
   
   newnode->data = val;
   
   newnode->bottom = NULL;
   
   newnode->next = NULL;


return newnode;
  

}





void bubblesort(int *a,int size){






    for (int i = 0; i< size - 1 ;i++)
     {
        for(int j=0 ;j < size-1-i ; j++) 
         {
            
            int tmp; 

            if (*(a+j) > *(a+j+1))
            {
                tmp = *(a+j+1);
                *(a+j+1) = *(a+j);
                *(a+j) = tmp;

            }
       
            
        }
        
    }


   

}



int main(){

//step1) creating list
   head = insert(5);
   head->bottom =insert(7);
   head->bottom->bottom =insert(8);
   head->bottom->bottom->bottom=insert(30);
   
   head->next = insert(10);
   head->next->bottom = insert(20);
   
   head->next->next = insert(19);
   head->next->next->bottom = insert(22);
   head->next->next->bottom->bottom = insert(50);

   
   head->next->next->next = insert(28);
   head->next->next->next->bottom = insert(35);
   head->next->next->next->bottom->bottom = insert(40);
   head->next->next->next->bottom->bottom->bottom = insert(45);




   //printf("data is %d\n",head->next->next->bottom->bottom->data  );

//step2)count total next pointer items at top level  
   
   int nextcount = 0;
   
   struct node *nextptr = head;
   
   while(nextptr!= NULL){

  
       nextptr =nextptr->next;
       nextcount++;
   }

   
   printf("nextcount %d\n",nextcount );
   
//step3)iterate over bottom and join links over botttom pointer  

   struct node *t1 = head;
   
   struct node *head_cache =head;
  // printf("head is %d\n",head->data  );

   while(nextcount)
   {

            while(t1->bottom != NULL)
            {
            // printf("data is %d\n",t1->data  );

             t1 = t1->bottom;
           
            }
           //  printf("data  %d\n",t1->data  );

            
             t1->bottom = head_cache->next;

             t1 = t1->bottom;

             head_cache->next ==NULL;
             head_cache = t1;

  nextcount--;

   }
  

  // printf("data is %d\n",head->data  );

//step4)make the array

static int a[13];

   struct node *t2 = head;
   
   int i = 0;

   while(t2 != 0){
      
      a[i] = t2->data;

      printf("%d\t", a[i]);
      i++;

      t2 = t2->bottom;
   }




//make the arr

//step5)sort the array
bubblesort(a,13);



printf("\nAfter Sorting\n");
for (int i = 0; i < 13; ++i)
{
   printf("%d\t",*(a+i) );
}




//step6) updating linked list


struct node *t3 =head;
i=0;
printf("\nAfter Updating Linked List\n");

while(t3 != NULL){


  t3 -> data = a[i]; 

  printf("%d\t",t3 -> data);

  t3  = t3->bottom;

  i++;





}






   return 0;
}