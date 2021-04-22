#include<stdio.h>  
#include<limits.h>
//#Sum of bit differences among all pairs




int main()
{
  int arr[] = {1,3,5};
  
  int n = sizeof(arr)/sizeof(int);

  int aux[n*n];

//step1) take xor of all elements with all
int k=0;
  for(int i = 0 ;i < n ;i++)
  {
     for(int j = 0;j<n;j++)
     {
          

           aux[k] = arr[i] ^ arr[j];
          printf("arr[i] : %d ^ arr[j] : %d = %d\n",arr[i],arr[j],aux[k] );

           k++;

     }

  } 

//print 
  printf("aux array is\n");
  for(int p =0 ;p<n*n;p++)
  {
         printf("%d\t",aux[p] );
  }
  
  printf("\n");

//step2)for each item of aux array count number of set bits
  int setbitcount = 0;

  int num = 0;
  int rem = 0;
  for(int i = 0 ;i<n*n;i++)
  {
  
        num = aux[i];

        if (num == 0)
        {
          continue;
        }

        while(num > 0)
        {

            rem = num%2;

            if(rem == 1)
            {
               setbitcount++;
            }
             

            num = num/2;

        }
  }

	
  printf("Sum of bit differences among all pairs :  %d\n",setbitcount );

 return 0;

}




/*

T.C = O(n^2)


*/