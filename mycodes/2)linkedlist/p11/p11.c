#include<stdio.h>
#include<stdlib.h>
//Add single digit to a number represented as linked list


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
void reverse(struct node *p)
{
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



int work(int add)
{

        temp = head;
        int carry = 0;

        int res;
        res = temp->data + add;
        int r = 0;
       // printf("tempdata is %d\n",temp->data );

        while(temp != NULL)
        {   
              //printf("lopp\n");
              carry = res/10;


            
              if (carry == 0) //if res is single digit number
              {
                 r = res;  //r is number which we want to append in LL
              }
              else       //if res is 2 digit number and henceforth to get Least significant digit
              {
                 r = res%10;

              }



              temp->data = r;


              

              temp = temp->next;

              if(temp == NULL)
              {
                break;

              }

              res = temp->data + carry;

               

        }

              printf("\ncarry %d\n",carry);


return carry;
}




int main()
{
   //creating list
   //inserting elements into a list
   insert(9);
   insert(9);
   insert(9);


   //displaying the list
   printf("\nOrignal linked list is : ");
   display();

   temp = head;
   int add = 1;

//step1) reverse list

   reverse(head);
    printf("\nReversed List is: ");
   display();





//step2) received carry
   int c = work(add);
    //printf("temp->data %d :",temp->data);

   if (c == 0)   //no extra no need to added e.g 998 +1 = 999
     {
       reverse(head);
       display();      
     }
  else         //c = 1 then extra node is needed e.g 999+1=1000
    {

      temp = head;

      while(temp->next != NULL)
      {
        temp = temp->next;
      }

      insert(c);

      reverse(head);
      display(); 
     
    }



   return 0;
}