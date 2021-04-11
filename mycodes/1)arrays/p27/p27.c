// Find the element that appears once in sorted array
#include <stdio.h>

/*
Note :
In sorted array if consecutive two times comparision are not equal then element can be identified. 

*/



int main(){


int A[] = {1, 1, 2, 5, 5};

int consecutive_dual = 0;
int i = 0;
int  j = 1;



int size = sizeof(A)/sizeof(int);

int looprun = size-1;




while(looprun){
  
  if (consecutive_dual == 1 && A[i] == A[j])
  {
    consecutive_dual = 0;
  }
 
 if (A[i] != A[j])
 {
   consecutive_dual++;
 }



if (consecutive_dual == 2)
{
  
  break;
}


i++;
j++;
looprun--;

}





printf("Single Element is : %d\n",A[i]);






  return 0;

}