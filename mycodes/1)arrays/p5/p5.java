
import java.util.*;
import java.lang.*;
import java.io.*;

import java.util.Arrays;
class demo
{

    // Function to right rotate an array by k positions
    public static void Rotate(int arr[], int d)
    {

     //step1   
     int temparr[] = new int[d];

     for (int i = 0;i<d ;i++ ) 
     {
        temparr[i] = arr[i];
         
     }
     

     System.out.println("temparr : "+Arrays.toString(temparr)); //[1,2]
            

    //step2
   
     for(int i = 0; i<d;i++)
     {
             for (int j = 0; j<arr.length-1 ;j++ ) {
                 
                 arr[j] = arr[j+1];
             }
           System.out.println("arr : "+Arrays.toString(arr)); 

      }
    
    //step3 : at last two places insert temp array

      int k = 0;
      for(int i = 0;i<arr.length;i++)
      {

               if(i == arr.length-d || i > arr.length-d) //arr.length - d => 7 - 2 = 5 which is our target index
               {
                
                arr[i] = temparr[k];
                k++;
                
               }


      }

    System.out.println("arr after step 3 : "+Arrays.toString(arr)); 


    }



public static void main(String[] args)
    {
        
        int arr[] = {1,2,3,4,5,6,7};
        int d = 2;

        Rotate(arr, d);

    }



    }

    




/*

time Complexity = O(n)
space complexity= O(d)




 */
