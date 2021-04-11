// C program to Reverse Bits 

#include<stdio.h>



int main(){


int X = 1;



static int arr[32];


int rem = 0;

int i = 0;
while (X > 0)
{
  rem = X%2;

  arr[i] = rem;
  i++;

  X = X/2;


}

printf("Binary number is\n");
for (int i = 0; i < 32; ++i)
{
  printf("%d", arr[i]);
}


unsigned long long int k = 0;



for (int i = 0; i < 32; i++)    
{    

k = 2 * k + arr[i];   //step2  

//printf("\nk %llu ",k);  
}    




printf("\nRequired Decimal Number is  :%llu", k);



  return 0;

}