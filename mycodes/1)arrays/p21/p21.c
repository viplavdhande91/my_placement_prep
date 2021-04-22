#include<stdio.h>  
#include<limits.h>
//#Minimum Number of Platforms Required for a Railway/Bus Station


int main()
{
    int arrival[] = {900, 940, 950, 1100, 1500, 1800};
    int departure[] = {910, 1200, 1120, 1130, 1900, 2000};
    
    int n1 = sizeof(arrival)/sizeof(int);

    int n2 = sizeof(departure)/sizeof(int);



    int i = 0;
    int j = 0;

    int tf = 0;
    int k = INT_MIN; //for finding max
    
    for(int q = 0;q<n1+n2;q++)
    {
    
        if(arrival[i] <= departure[j])
        {
         tf++;
         i++;

        }
        else
        {
          tf--;
          j++;

        }
 
        printf("tf is : %d\n",tf);
       

       //for getting max

        if(tf > k)
        {
         
         k = tf;
        }

       


    }


        printf("Minimum Number of Platforms Required is : %d\n",k);



 return 0;

}








/*
efficient Solution: 

T.C = O(n+n) = O(n)


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
