/* C Program for not using sizeof

https://www.youtube.com/watch?v=oQXeHp7bu-U&ab_channel=MySirG.com
 */ 
#include <stdio.h>
#include <stdlib.h>


int main() 
{  

  int x = 5;

  char c = 'c';
  printf("size of c : %d\n",sizeof(c) );


  printf("Size of x is %d\n",(char*) (&x + 1) - (char*) (&x));

 
  

    return 0; 
}