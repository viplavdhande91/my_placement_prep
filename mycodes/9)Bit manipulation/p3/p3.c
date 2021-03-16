// change even positions

#include <stdio.h>

void change_even_positions(int N)
{

static int arr[5];

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




//even places attack by 0


for (int i = 0; i < 8; ++i)
{
	
  if( i%2 == 0 )
  {


  arr[i] = 0;


  }


}


printf("\n");
printf("after even positions attack : \n");
for (int i = 0; i < size; ++i)
{
  printf("%d\t",arr[i] );
}


//changing binary to decimal


int k = 0;


for (int i = 0; i < size; ++i)
{
	k = k*2 + arr[i];
}

printf("\n\n");
printf("Final ans is %d\n",k );



}












int main(){
 

 int N = 30;

 change_even_positions(N);

  return 0;
}
