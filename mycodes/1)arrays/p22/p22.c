#include<stdio.h>  
#include<limits.h>
#include<math.h>
//matrix spiral traversal


int main()
{
    int R = 4;
    int C = 4;

    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    

    int no_of_ele = R*C;
    int i = 0;
    int j = 0;
    int r = R;
    int c = C;
    //printf("%d\n", r*c);

    int printcount = 0;

    while(no_of_ele > printcount)
    {

      while(j < c-1)
      {
        printf("%d\t",arr[i][j]);
        printcount++;
        j++;

      }
    
      //printf("%d\n", R*C);

      while(i < r-1)
      {
        printf("%d\t",arr[i][j]);
        printcount++;
        i++;
        
      }

      
      while(j > C-c)
      {
         printf("%d\t",arr[i][j]);
        printcount++;
        j--;
        
      }

      
      while(i > R-r)
      {
         printf("%d\t",arr[i][j]);
        printcount++;
        i--;
        
      }

      i++;
      j++;

      r--;
      c--;






    }

  
 return 0;

}








/*
https://www.youtube.com/watch?v=Q9Umd_pv3x8&ab_channel=KolliShravani

T.C = O(R*C) 


*/




/*

Naive Solution: 



Algorithm: 
1)Run two nested loops the outer loop from start to end and inner loop from start+1 to end.

2)For every iteration of outer loop find the count_of_intervals that intersect with the current interval.

3)Update the answer with maximum count of overlap in each iteration of outer loop.
{i.e Use k to find max of each iteration}

T.C =  O(n^2)


*/
