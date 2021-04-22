// Array Subset of another array


/*
T.C = O(m*n)

*/


#include <stdio.h>


int main(){
  


  int arr1[] = {10,5 ,2 ,23, 19};

  int arr2[] = {19,5};
  
   int size1 = sizeof(arr1)/sizeof(int);

   int size2 = sizeof(arr2)/sizeof(int);



  
  int mycheck  = 1;

  for (int i = 0; i < size2; ++i)
  {
    
         for (int j = 0; j < size1; ++j)
         {

              if (arr2[i] == arr1[j])
              {
                 break;

              }
              

              if(j == size1-1)
              {
                mycheck = 0;

              }

          

         }
  }
      

  
  



  if (mycheck == 1)
  {
    printf("Yes\n");
  }
  else{
    printf("No\n");


  }



  return 0;

}