
#include <stdio.h>
#include<math.h>
#include<limits.h>
//Rotate a matrix by 90 degree anticlockwise




int main(){

int arr[4][4] = {{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16}};

int transpose[4][4];

int size = sizeof(arr[0])/sizeof(int);
   //printf("size %d\t", size);

int temp =0;


//operation 1 :original to transpose
for (int i = 0; i < size ; ++i)
{
  for (int j = 0; j < size; ++j)
  {
    
    
    temp = arr[i][j];

    transpose[j][i] = temp;



  }


}





//print transpose matrix

printf("Transpose of Matrix  is :\n");
for (int i = 0; i < size; ++i)
{
  
  for (int j = 0; j < size; ++j)
  {
    
   printf("%d\t", arr[i][j]);


  }

printf("\n");
}





//operation 2 : transpose rows reverse
int p = 0;
int q = 0;

for (int i = size-1; i >= 0; --i)
{
   q = 0;
  for (int j = 0; j < size; ++j)
  {
    
   arr[p][q] = transpose[i][j];

   q++;
  }

p++;
}




printf("\n");
printf("Final Matrix is : \n");

//print Answer matrix
for (int i = 0; i < size; ++i)
{
  
  for (int j = 0; j < size; ++j)
  {
    
   printf("%d\t", arr[i][j]);


  }

printf("\n");
}






     return 0;
 
}













