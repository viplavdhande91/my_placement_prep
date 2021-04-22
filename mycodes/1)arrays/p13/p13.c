#include<stdio.h>  
#include<limits.h>
//#Find Contiguous Subarray with given sum


int main()
{
 int arr[] = {1,4,20,3,10,5};

 int sum = 33;

 int left = 0;

 int right = 0;
  
 int size = sizeof(arr)/sizeof(int);
 
 int current_sum = 0;

while(current_sum != sum)
{
         

		  if(current_sum < sum)
		  {
		  	current_sum = current_sum + arr[right];
		  	
		  	if(current_sum < sum)
		  	  {

		  	   right  = right +1;

		  	  }


		  }
		  else
		  {
		   
		  current_sum = current_sum - arr[left];

		  left = left+1;


		  }

}

printf("left : %d , right :%d",left,right);
printf("\nSubarray is:\n");

for(int j = left;j<=right;j++)
{


printf("%d\t",arr[j]);



}



 return 0;
}



/*
https://www.youtube.com/watch?v=Ofl4KgFhLsM&ab_channel=TECHDOSE
Time complexity = O(2*n) =O(n)

Space Complexity = O(1)














Steps of logic/Algo

1)left = 0,right = 0

2)while(currentsum != sum)
 {
	if()
	{
	keep increasing currentsum by arr element from left traversing

	keep increment right pointer

	}
	else{
		keep decreasing currentsum by arr element from left traversing

        keep incrementing left pointer

	}

 }





*/