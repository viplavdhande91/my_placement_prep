// C program to Reverse alternate K nodes in a Singly Linked List
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
void insert(char val){
   struct node *newnode = (struct node*) malloc(sizeof(struct node));
   newnode->data = val;
   newnode->next = NULL;
   
   if(head == NULL)
   {
      head = newnode;
      temp = head;
      count++;
   } 
   else
    {
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
      printf("Linked List is :\n");
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
    
          while(p != NULL)
              {
                 arr[indexcount] = p->data;
                
                 indexcount++;
                 p=p->next;     

              }      
               
            
      
    } 
     
   




//step2) reversing k sized alternate blocks

    int i = 0;
    int j = k-1;

    int size = sizeof(arr)/sizeof(char);
    
    printf("\nsize is %d\n",size );
     
    int icache = 0;
    int jcache = 0;

    while(i<size && j<size)
    {
          icache = i;
          jcache = j;

               // printf("i : %d\n",icache );   
             //   printf("j : %d\n",jcache );   

              while(i < j)
              {
                 int temp = arr[i];
                 arr[i] = arr[j];
                 arr[j] = temp;

                 i++;
                 j--;

              }

          
          i = icache + 6;
          j = jcache + 6;


          if(i <= size && j >= size) //i is within indexbounds && j is getting out of indexbounds
          {

            i = icache + 6;
            j = size-1;
           
          }
         
           
            
     }


  //step3)array copying to LL  

   temp = head;

   int index = 0;
   while(temp != NULL)
   {
    
    temp->data = arr[index];

    index++;
    temp = temp->next;



   }






    printf("\ncharacter array is:\n");
    for (int i = 0; i < count; ++i)
    {
      printf("%c\t",arr[i] );

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
   insert('I');



   //displaying the list
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


Time Complexity = O(k*k)

Space Complextiy = O(n)  extra array space




Additnal ref


https://www.geeksforgeeks.org/reverse-an-array-in-groups-of-given-size/



contributed by Viplav Patil 

*/