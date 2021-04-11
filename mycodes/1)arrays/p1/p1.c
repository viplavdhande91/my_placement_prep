#include <stdio.h>


int main()
{ 

  int sum = 10;

  int arr[] = {8,7,2,5,3,1};
  
  int size = sizeof(arr)/sizeof(int);


  for (int i = 0; i < size; ++i)
  {
   

		   for (int j = i+1; j < size; j++)
		   {
		  
		     
		     if (arr[i]+arr[j] == sum)
		     {
		     printf("pair found at index %d and %d (%d + %d)",i,j,arr[i] ,arr[j]);
		     return 1;
		     }
       

		   }


  }
   



	return 0;
}
