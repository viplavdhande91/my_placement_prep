//Missing number in array 




#include <stdio.h>


int main(){

int A[] = {1,2,3,4,5,6,7,8,10};


int size = sizeof(A)/sizeof(int);

int index = 0;
int i;
for (i = 1; i <= size ; ++i)
{
  
  if (i != A[index])
  {
    break;
  }

index++;


}

printf("res is %d\n",i );


  return 0;
}