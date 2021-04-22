// sort the array of 0,1,2
#include <stdio.h>

//same as p6



int main()
{

int arr[]= {0 ,2, 2,2,1,1,0,0};

int zero_count = 0;

int one_count = 0;
int two_count = 0;



int size = sizeof(arr)/sizeof(int);

int temp = 0;
for (int i = 0; i <size ; ++i)
{
   
   temp = arr[i];

   switch(temp){
    
    case 0:
     zero_count++;
     break;
 

     case 1:
     one_count++;
     break;
    

     case 2:
     two_count++;
     break;

   }



}

printf("zero_count : %d\n",zero_count );


printf("one_count : %d\n",one_count );
printf("two_count : %d\n",two_count );


for (int i = 0; i < zero_count; i++)
{
	arr[i] = 0;
}

for (int i = zero_count; i < zero_count + one_count; i++)
{ 
	//printf("hey there\n");
	arr[i] = 1;
}

for (int i = zero_count + one_count; i < zero_count+one_count+two_count; i++)
{
	arr[i] = 2;
}


printf("\n");
printf("Sorted Array\n");
for (int i = 0; i < size; ++i)
{
	printf("%d\t",arr[i] );
}



return 0;
}