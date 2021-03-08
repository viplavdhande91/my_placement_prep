
import java.util.*;
import java.lang.*;
import java.io.*;

class demo
{

    // Function to right rotate an array by k positions
    public static void Rotate(ArrayList<Integer> A, int d)
    {
     
     ArrayList<Integer> temp = new  ArrayList<Integer>();   
        
        for(int i = 0 ; i < d ; i++ ){
             temp.add(A.get(i));
        }
        
  System.out.println(temp); // [1, 2]
/////////////////////////////////////////////////////////////

for (int i = 0;i<d ;i++ ) {
   
   A.set(i,123456789) ;



}

    System.out.println(A);  //[123456789, 123456789, 3, 4, 5, 6, 7]

///////////////////////////////////////////////////////// 

     ArrayList<Integer> B = new  ArrayList<Integer>();   


for (int i = 0;i<A.size() ;i++ ) {
   
   if(A.get(i) != 123456789 ){
    B.add(A.get(i));

   }
    

}

System.out.println(B);   // [3, 4, 5, 6, 7]
 
///////////////////////////////////////////////////////// 


for (int i = 0;i<d ;i++ ) {
   
    B.add(temp.get(i));

   
    

}
System.out.println(B);   // [3, 4, 5, 6, 7,1,2]

///////////////////////////////////////////////////////// 


}



public static void main(String[] args)
    {
        ArrayList<Integer> A = new  ArrayList<Integer>();

        A.add(1); 
        A.add(2); 
        A.add(3); 
        A.add(4); 
        A.add(5); 
        A.add(6); 
        A.add(7); 

        int d = 2;

        Rotate(A, d);

    }



    }

    




/*

time Complexity = O(n)
space complexity= O(d)+O(n)




 */
