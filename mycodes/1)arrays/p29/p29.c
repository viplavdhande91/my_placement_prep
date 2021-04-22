//Missing number in array 




#include <stdio.h>


int main(){

int A[] = {1,2,3,4,5,6,7,8,10};


int size = sizeof(A)/sizeof(int);





int sum = 0;
for(int i = 0; i < size ; ++i)
{
  sum = sum +A[i];
 
}




int n = size+1;

int natural_sum =n*(n+1)/2;






printf("natural_sum is %d\n",natural_sum );

printf("sum is %d\n",sum );

printf("Missing number is %d\n",natural_sum - sum );

  return 0;
}