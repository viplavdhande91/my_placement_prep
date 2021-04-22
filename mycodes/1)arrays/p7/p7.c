#include<stdio.h>  
#include<limits.h>

//Maximum difference between two elements such that larger element appears after the smaller number

/*

Method 1 (Simple) 
Use two loops. In the outer loop, pick elements one by one and in the inner loop calculate the
difference of the picked element with every other element in the array and compare the difference 
with the maximum difference calculated so far. Below is the implementation of the above approach : 



Time Complexity : O(n^2) 
Auxiliary Space : O(1)

*/



int main()
{

int arr[] = {2,3,10,6,4,8,1};

int size = sizeof(arr)/sizeof(int);

int diff = 0;

int k = INT_MIN; //for max calculation

for(int i = 0;i<size;i++)
{

     for(int j = i+1;j<size;j++)
     {

     	if(arr[i] <= arr[j])
     	{

		         diff = arr[j] - arr[i];
		         
		         if(k < diff)
		         {

		         	k = diff;
		         }

     	}

     }

}


printf("Maximum diffrence is  : %d\n",k );






return 0;
}



/*
ALTERNATIVE METHOD o(N)


S1)TRAVERSE FROM TAIL_OF_ARRAY TO START AND FIND MAXIMUM ELEMENT (STORE IT IN var1)

S2)CAPTURE THE INDEX OF MAXIMUM ELEMENT

S3)RUN FROM START TO MAX_ELEMENT'S INDEX AND TRY TO FIND MINIMUM (STORE IT IN var2)

S4) CALCULATE DIFFRENCE OF var1- var2
*/