// Array Subset of another array


/*
step1)m*n loop

step2)track_arr will save all 1's for  elements which are present


*/


#include <stdio.h>



int is_subset(int *p1,int *p2,int size1,int size2)
{
		

          printf("size1 is :  %d\n",size1 );
          printf("size2 is :  %d\n",size2 );

		static int track_arr[4];

		


		for (int i = 0; i < size2; i++)
		{
			 int item2 = *(p2+i);

		 for (int j = 0; j < size1; j++)
		 {
		      
		      if(item2 == *(p1+j))
		      {
		       
		       track_arr[i] = 111;

		      }

		 }

		}




        int trackcount = 0;
        //printf("tracker array\n");

        for (int i = 0; i < size2; ++i)
        {  
        	//printf("%d\t",track_arr[i] );
        	
        	if (track_arr[i] == 111)
        	{
        		
        		trackcount++;        		
        	}
        }


        if (trackcount == size2 )
        {
        	return 1;
        }
        else{

        	return 0;
        }



 

}



int main(){
  


  int arr1[] = {10,5 ,2 ,23, 19};

  int arr2[] = {19,5,3};
  
   int size1 = sizeof(arr1)/sizeof(int);

   int size2 = sizeof(arr2)/sizeof(int);



  
  int res  = is_subset(arr1,arr2,size1,size2);
  

  printf("result is :  %d\n",res );


  if (res == 1)
  {
  	printf("Yes\n");
  }
  else{
  	printf("No\n");


  }



  return 0;

}