// Set kth bit

#include <stdio.h>

void set_kth_bit(int N,int k)
{

int arr[4];

int rem = 0;


int i = 0;

while(N>0){

rem = N%2;

arr[i] = rem;
i++;

N= N/2;

}

//reverse the array
i = 0;

int size = sizeof(arr)/sizeof(int);

int j = size-1;

while(i<j)
{

int temp = arr[i];

arr[i] = arr[j];

arr[j] = temp;

i++;

j--;

}

//print the number


printf("The given N is : \n");
for (int i = 0; i < size; ++i)
{
  printf("%d\t",arr[i] );
}




//setting kth bit from last


int hit = size - k - 1;


arr[hit] = 1;

//print the number

printf("\n");
printf("After setting kth bit is : \n");
for (int i = 0; i < size; ++i)
{
  printf("%d\t",arr[i] );
}



}












int main(){
 
 int k = 2;

 int N = 10;

 set_kth_bit(N,k);

  return 0;
}
