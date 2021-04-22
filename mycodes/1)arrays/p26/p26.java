import java.util.*;
import java.lang.*;
//Given a list of non negative integers, arrange them such that they form the largest number.


/* 
outer loop's i is static and inner loop j runs from i+1 to end


https://www.youtube.com/watch?v=qEIGhVtZ-sg&ab_channel=TECHDOSE



NOTE:

on swapping if we are getting better increased number then only we have to swap;

*/


class demo{


public static void main(String Args[]){

  int arr[] = {3,30,34,5,9}; 




int temp1 = 0;
int temp2 = 0;


String str1 = "";
String str2 = "";


String tempstr1 = "";
String tempstr2 = "";

   for (int i = 0;i<arr.length ;i++ ) {
   


      for (int j= i+1;j<arr.length ;j++ ) 
      {
             

            
             str1 = Integer.toString(arr[i]);
             str2 = Integer.toString(arr[j]);


             tempstr1 = str1 + str2;
             tempstr2 = str2 + str1;

             System.out.println(tempstr1);
             System.out.println(tempstr2);

             temp1 = Integer.parseInt(tempstr1);
             temp2 = Integer.parseInt(tempstr2);


             if (temp2  > temp1)
             {
               
               temp1 = arr[i]; 
               temp2 = arr[j];

              
               arr[i] = temp2;   //swap 
               arr[j] = temp1;

              System.out.println("swap done");
              System.out.println("current state of array :  ");

                for(int kk :arr)
                {
                
                System.out.print(kk+"\t");

                }


             }
             
                System.out.println("\n");

      }


    System.out.println(i+1 +"th "+"Item proccesed\n");

                System.out.println("\n");
                System.out.println("\n");
                System.out.println("\n");
                System.out.println("\n");

   }
 
   String result = "";
   for (int i = 0; i<arr.length ;i++ ) {
      
      result +=Integer.toString(arr[i]); 
   }
   

      System.out.println(result);    
 
    }
}






