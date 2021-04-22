// Find the element that appears once in sorted array
#include <stdio.h>





int main(){


int A[] = {1, 1, 2, 5, 5};

int res = 0;

int n = sizeof(A)/sizeof(int);

for(int i = 0;i<n;i++)
{

res = res ^ A[i];   //xor


}





printf("Single Element is : %d\n",res);






  return 0;

}