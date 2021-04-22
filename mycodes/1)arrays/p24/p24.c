// Print all jumping numbers smaller or equal to given value
#include <stdio.h>
#include<math.h>

int main()
{

int x = 20;

for(int i = 0;i<=x;i++)
{
 
       if(i <=  9)
       {
          printf("%d\n",i);
          continue;

       }
       else
       {
            int n = i;
            int mycheck = 1;
             
            int cache =  n%10;  //number 1
            n = n/10;

            while(n > 0)
            {
                  if(abs(cache- n%10) == 1)   //number 2 = n%10
                  {
                      mycheck = 1;
                  }

                  else{
                       mycheck = 0;
                       break;
                  }



                  cache = n%10;
                  n = n/10;

            }


            if (mycheck == 1)
            {
              printf("%d\n",i);
            }


       }






}





return 0;
}




//T.C = O(n^2);