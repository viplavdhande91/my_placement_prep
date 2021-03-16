// Set kth bit

#include <stdio.h>

void swap_two_nibbles(int N)
{

static int arr[8];

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




//swapping two nibbles


static int new_arr[8];


i=0;

for (int j = 4; j < 8; j++)
{
	
	new_arr[i] = arr[j];

	i++;
}


i = 4;
for (int j = 0; j < 4; j++)
{
	
	new_arr[i] = arr[j];

	i++;
}

printf("\n");
printf("After swapping nibbles: \n");
for (int i = 0; i < size; ++i)
{
  printf("%d\t",new_arr[i] );
}





}












int main(){
 

 int N = 100;

 swap_two_nibbles(N);

  return 0;
}
