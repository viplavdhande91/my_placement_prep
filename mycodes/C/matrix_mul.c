#include <stdio.h>


int main(){
  
  int x[3][3] = {{12,7,3},
               {4,5,6},
               {7 ,8,9}};

 

  int y[3][4] = {{5,8,1,2},
               {6,7,3,0},
               {4,5,9,1}};



 int r = 3;        //pehle ke rows
 int c = 4;        //dusre ke columns are imp



//output matrix construction
 int res[3][4] ; //output matrix

 for (int i = 0; i < r; i++)
 {
   
   for (int j = 0; j < c; j++)
   {
     
  res[i][j] = 0;

   }
 }
  

//actual multiplication

for (int i = 0; i < r; i++)
{
  
   for (int j = 0; j < c; j++)
   {
  

     for (int k = 0; k < r; k++)
     {
    
      res[i][j] += x[i][k] * y[k][j]  ; 
    
     }

   }


}

//printing  multiplication

for (int i = 0; i < r; i++)
 {
   
   for (int j = 0; j < c; j++)
   {
     
 printf("%d\n",res[i][j] );
   }
 }
  



//https://www.programiz.com/python-programming/examples/multiply-matrix





return 0;

}