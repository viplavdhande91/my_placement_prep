package com.company;
import java.util.Arrays;
class Main
{
   public static void segreegate(int A[],int n){
    int countzero = 0;
//counting no of zeros
    for (int i=0; i<n; i++){
        if(A[i]==0){
            countzero+=1;
        }
    }
//fill up 0s
    for(int i =0;i<countzero;i++){
        A[i]=0;
    }
//fill up 1s
    for(int i = countzero ; i<n; i++){
           A[i]=1;
       }
       //System.out.println(countzero);
       //System.out.println(n);
   }
    public static void main(String[] args)
    {
        int[] A = { 0,1,0,1,1,1,1,0,1,0 };
        int n = A.length;
        segreegate(A,n);
        System.out.println("Segregated array items:"+Arrays.toString(A));
    }
}

/*

time Complexity = O(n)
space complexity= O(d)
 */
