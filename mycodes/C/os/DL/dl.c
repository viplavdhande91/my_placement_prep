
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>

//Deadlock example in C

static int r1 = 1;
static int r2 = 1;



int mybool = 1;


void taken(int pid)
{


while(true)
{

      if (r1 > 0 && mybool)
      {
        mybool=0;
        r1--;
        
        printf("%Pid %d has taken R1\n",pid);
        return;

      }

break;


}




while(true)
{

      if (r2 > 0)
      {
        r2--;
        
        printf("%Pid %d has taken R2\n",pid);
        return;


      }

sleep(5);
printf("%Pid %d is waiting for Resource R2\n",pid);

}




}

int main(){




int pid = 1;
taken(pid);

pid = 2;
taken(pid);



pid = 1;
taken(pid);

pid = 2;
taken(pid);






return 0;


}