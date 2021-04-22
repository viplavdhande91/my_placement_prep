#include<stdio.h>
#include<stdlib.h>
// Find duplicates in an array 
//https://www.youtube.com/watch?v=iiYc32-4ZJY&ab_channel=UBlog


/*

Use same array as hashmap coz elements are present in range 0 to n-1

T.C Expected = O(n)

S.C = O(1)

*/

int main()
{

int arr[] = {2,3,1,2,3};


int n = sizeof(arr)/sizeof(int);



for (int i = 0; i < n; ++i)
{
  
		  int index = arr[i] % n;

		  arr[index] = arr[index] +  n;


}



printf("\nresult \n");

for (int j = 0; j < n; ++j)
{
  
   int count = arr[j]/n;

   printf("value : %d , count: %d \n",j,count);


  

}



return 0;
}