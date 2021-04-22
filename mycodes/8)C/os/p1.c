
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
//Counting Semaphore
void up();
void down();




struct semaphore{

  int value;
  
   int queue[10] ;

}s;





void down(int pid)
{
      s.value = s.value - 1;
     
      printf("pid : %d ,S : %d DOWN\n", pid,s.value);

      int rear = 0;
      int front = 0;

      if (s.value < 0)   //id s.value is negative will add processes to queue
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

      else   //s.value is between 0 to +ve integer
      {
         return;
      }

}


void up(int pid)

{
      s.value = s.value + 1;
      printf("pid : %d ,S : %d UP\n", pid,s.value);


      if (s.value <= 0)
        //For loop : to reach first non zero item
        for (int i = 0; i < 10; ++i)
        {
           if (s.queue[i] != 0)
           {  
              printf("\nProcess (pid : %d) is taken out from queue\n",s.queue[i] );
              s.queue[i] = 0;
              break;
           }
       
        }
        

      {


         

      }



}





int main(){

s.value = 3;

printf("Counting Semaphore : %d\n",s.value );

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