
import java.util.*;
import java.lang.*;
import java.io.*;


class demo
{
    static int getOddOccurrence(int ar[], int ar_size)
    {
        int i;
        int res = 0;
        for (i = 0; i < ar_size; i++)
        {
            res ^= ar[i];
            //System.out.println(res);

        }
        return res;
    }

    public static void main(String[] args)
    {
        int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
        int n = ar.length;
        System.out.println("odd times occuring number : "+getOddOccurrence(ar, n));
    }
}
/*
The Best Solution is to do bitwise XOR of all the elements. 
XOR of all elements gives us odd occurring element.

Below is the implementation of the above approach.

Time Complexity: O(n)

k = 2^3^5^4^5^2^4^3^5^2^4^4^2

k is 5

Note:
1)Its and interesting property of XOR
2)here we did XOR of all the given elements
3)In Que only one element is odd all others are even
4)^ is used as XOR in java
*/