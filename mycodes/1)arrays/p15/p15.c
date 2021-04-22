#include<stdio.h>  
#include<limits.h>
//# Python3 program to find the smallest  positive value that cannot be  represented as
// sum of subsets of a given sorted array 



int main()
{
  
  int a[] = {1,3,6,10,11,15};

  int c = 1;
  
  int n = sizeof(a)/sizeof(int);

  for(int i = 0;i<n;i++)
  {
   
        c = c + a[i];

		  if(c < a[i+1])
		  {
          
          printf("value: %d",c);
          return 0;

		  }
		  
  


  }

  
  printf("value is: %d",c);

	
 return 0;
}



/*

Time Complexity = O(n)
Space Complexity = O(1)




https://www.geeksforgeeks.org/find-smallest-value-represented-sum-subset-given-array/


*/