import java.util.*;
//program to find a triplet  returns true if there is triplet  with sum equal to 'sum'
public class demo
{


            public static void main(String[] args) 
            {
                
                    int a[] =  {12,3,4,1,6,9};
                    int sum = 24;


                    bubblesort(a);

                    System.out.println("sorted array" + Arrays.toString(a));

                    for(int i = 0;i<a.length-2;i++)
                    {

                     int l = i+1;
                     int r = a.length - 1;


                             while(l<r)
                             {

                                if(a[i]+a[l]+a[r] == sum)
                                {
                                 System.out.println("Triplet is : "+a[i]+" "+a[l]+" "+a[r]);
                                 return;
                                }
                                else if(a[i]+a[l]+a[r] < sum) //#coz if sum of 3 items is smaller then A[l]  has to be increased towards righmtost 
                                {
                                  
                                    l++;
                                }
                                else if(a[i]+a[l]+a[r] > sum) //coz if sum of 3 items is greater then A[r] is culprit so deacrease r
                                {
                                 
                                 r--;

                                }




                             }






                    }


            }



        public static void bubblesort(int a[])
        {

            int  i;
            int  j;


                for (i = 0; i<a.length - 1 ;i++ )
                 {
                    for ( j=0 ;j < a.length-1-i ; j++) {
                        int tmp; 

                        if (a[j] > a[j+1])
                        {
                            tmp = a[j+1];
                            a[j+1] = a[j];
                            a[j] = tmp;

                        }

                        
                    }
                    
                }





        }


}




/*



Complexity Analysis:
Time complexity: O(N^2).
There are only two nested loops traversing the array, so time complexity is O(n^2). 
Two pointers algorithm takes O(n) time and the first element can be fixed using another nested traversal.
Space Complexity: O(1).
As no extra space is required.



https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/



*/