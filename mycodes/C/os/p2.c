
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
//Binary Semaphore in C
void up();
void down();




struct Binary_semaphore{

   int value;  
   int queue[10] ;

}s;





void down(int pid)
{
     

      int rear = 0;
      int front = 0;


      if (s.value == 1)
      {
        s.value = 0;
        printf("pid : %d ,S : %d DOWN\n", pid,s.value);

      }
      else
      {

      //For loop : to reach first zero item and get its index

        for (int i = 0; i < 10; ++i)
        {
           if (s.queue[i] == 0)
           {
              rear = i;
              break;
           }
        }

 
        s.queue[rear] = pid;



        }

     

}


int is_queue_empty(){


int size  = sizeof(s.queue)/sizeof(int);

int res = 1;
for (int i = 0; i < size; ++i)
{
  
  if (s.queue[i] != 0)
  { 
    res = 0;
    return res;
  }
  
  

}

return res;





}



void up(int pid)
{
     
      if (is_queue_empty())
      {
      
            if (s.value==1)
            {
              
            }
            else{

              s.value = s.value + 1;

            }


      printf("pid : %d ,S : %d UP\n", pid,s.value);



      }
      else //some processses are waiting in queue
      {


          //For loop : to reach first non zero item
          for (int i = 0; i < 10; ++i)
          {
             if (s.queue[i] != 0)
             {  
                printf("\nProcess (pid : %d) is taken out from queue and gone to CS\n",s.queue[i] );
                s.queue[i] = 0;
                break;
             }
         
          }


      }
      
        

}





int main(){

s.value = 1;

printf("mutex : %d\n",s.value );

down(0);
sleep(1);

down(1);
sleep(1);

down(2);
sleep(1);

down(3);
sleep(1);

down(4);
 sleep(1);

printf("Queue:\n");
 for (int i = 0; i < 10; ++i)
 {
    printf("%d\t",s.queue[i] );
 }

printf("\n");
up(1);

up(2);



 printf("Queue:\n");
 for (int i = 0; i < 10; ++i)
 {
    printf("%d\t",s.queue[i] );
 }

printf("\n");
return 0;


}