//Non Repeating Numbers 
//https://www.youtube.com/watch?v=QZzH7ZTksKk&ab_channel=BeingZero
#include<stdio.h>



int main()
{


int N = 2;

int arr[] = {2,4,7,9,2,4};

//step1)Take xor of all elements

int all_xor = 0;

int size = sizeof(arr)/sizeof(int);

for (int i = 0; i < size ; ++i)
{
	
  all_xor ^= arr[i];

}



//step2)
  
 
int n1 = 0;

int n2 = 0;

int mask_number = all_xor & -all_xor;



//step3)
for (int i = 0; i < size; ++i)
{

if ((mask_number & arr[i]) == 0)
{
	
	n1 ^= arr[i];
}
else{

	n2 ^= arr[i];
    
}

}

printf("n1 : %d \n",n1 );
printf("n2 : %d \n",n2 );

  return 0;

}