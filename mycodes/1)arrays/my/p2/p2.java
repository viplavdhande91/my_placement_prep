
/*


Complexity Analysis:
Time Complexity: O(n).
One traversal of the array is needed, so the time complexity is linear.
Auxiliary Space : O(n).
Since a hashmap requires linear space.



 */


package com.company;
import java.util.HashMap;

/* Program for finding out majority element in an array */

public class Main
{
    public static void findMajority(int[] arr)
    {
        HashMap<Integer,Integer> map = new HashMap<Integer, Integer>();


        for(int i = 0; i < arr.length; i++) {
            
            if (map.containsKey(arr[i])) {
                
                int count = map.get(arr[i]) +1;
                if (count > arr.length /2) {
                    System.out.println("Majority found :- " + arr[i]);
                    return;
                } else
                    map.put(arr[i], count);

            }

            else
                map.put(arr[i],1);
        }
        
        System.out.println(" No Majority element");
    }


    /* Driver program to test the above functions */
    public static void main(String[] args)
    {
        int a[] = new int[]{2,2,2,2,5,5,2,3,3};

        findMajority(a);
    }
}

