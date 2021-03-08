import java.util.*;
import java.lang.*;
//Given a list of non negative integers, arrange them such that they form the largest number.


/* 
outer loop's i is static and inner loop j runs from i+1 to end


https://www.youtube.com/watch?v=qEIGhVtZ-sg&ab_channel=TECHDOSE
*/


class demo{


public static void main(String Args[]){

   ArrayList<Integer> A =new ArrayList<Integer>();
   A.add(3);
   A.add(30);
   A.add(34);
   A.add(5);
   A.add(9);

int v1 = 0;
int v2 = 0;

int temp1 = 0;
int temp2 = 0;


String str1 = "";
String str2 = "";


String tempstr1 = "";
String tempstr2 = "";
   for (int i = 0;i<A.size() ;i++ ) {
   

      v1 = A.get(i);

      for (int j= i+1;j<A.size() ;j++ ) {
       
       v2 = A.get(j);

       


       str1 = Integer.toString(v1);
       str2 = Integer.toString(v2);

       tempstr1 = str1 + str2;
       tempstr2 = str2 + str1;

       temp1 = Integer.parseInt(tempstr1);
       temp2 = Integer.parseInt(tempstr2);


       if (temp2  > temp1){
         
         temp1 = A.get(i);
         temp2 = A.get(j);

         A.set(i,temp2);
         A.set(j,temp1);


       }
       else
       {
         continue;
       }
         
      }
      
   }
 
   String result = "";
   for (int i = 0; i<A.size() ;i++ ) {
      
      result +=Integer.toString(A.get(i)); 
   }
   

   System.out.println(A);   
      System.out.println(result);    
 
    }
}






