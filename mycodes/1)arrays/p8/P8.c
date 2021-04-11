#include<stdio.h>  
#include<limits.h>
//MERGE TWO SORTED ARRAYS
//O(n)

int main()
{

int arr1[] = {1,3,5,7,9};

int arr2[] = {2,4,8,10,11,12,16};


int size1 = sizeof(arr1)/sizeof(int);  //5

int size2 = sizeof(arr2)/sizeof(int); //7


int size = size1 + size2 ;


int res[size];

int i=0,j=0,k=0;

while(i<size1 && j<size2)
{
    
	    if(arr1[i] <= arr2[j])
	    {

	     res[k] = arr1[i];
	     i++;
	     k++;

	    }
	    else
	    {

	   res[k] = arr2[j];
	   j++;

	   k++;

	    }

}

printf("i : %d\n",i ); //i = 5  ; i is out of bounds
printf("j : %d\n",j ); // j = 3
printf("k : %d\n",k ); //  k = 8




while(i < size1)  //this is going to get false
{

res[k] = arr1[i];
k++;
i++;

}


while(j < size2)
{

res[k] = arr2[j];
k++;
j++;

}


printf("Sorted array is :\n");
for (int q = 0; q < size; ++q)
{
	printf("%d\t",res[q]);
}


return 0;
}



/*
https://www.youtube.com/watch?v=xF3TU-QlhJQ


Time complexity =O(n)
Space Complexity = O(m+n) //due to res array
*/