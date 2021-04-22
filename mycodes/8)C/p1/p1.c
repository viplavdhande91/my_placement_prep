
#include <stdio.h>
#include<math.h>
#include<limits.h>
//Given a binary array, find the length of the longest subarray of all 1's.



void work(int *p,int size)
{

int k = INT_MIN;

int count=0;

int mycheck = 1;

int gcount = 0;
for (int i = 0; i < size; ++i)
{
  
  

  if(*(p+i) == 1 && mycheck == 1)
	{

		count++;
	    mycheck = 0;
	    gcount++;

	}
  else if(*(p+i) == 1 && mycheck == 0){
   
   gcount++;


  }


  if(*(p+i) == 0 && mycheck == 0)
  {
  	if (k < gcount){

  		k = gcount;

  	}

    
    gcount = 0;
  	mycheck = 1;
  }




}


printf("count %d\n",count );
printf("k %d\n",k );

}

int main(){

int arr[] = {0,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,1,1,0,1};


int size = sizeof(arr)/sizeof(int);




work(arr,size);

     return 0;
 
}













