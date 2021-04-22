# Python implementation for Count of the number of possible triangles

def CountTriangles( A): 

    n = len(A); 

    A.sort(); 

    count = 0; 
    
    for i in range(n - 1, 1, -1): #(3,1,-1)
        print("i : {}".format(i));
        l = 0; 
        r = i - 1; 
        while(l < r): 
            if(A[l] + A[r] > A[i]): 


# If it is possible with a[l], a[r] and a[i] then it is also possible  
#with a[l+1],a[r],a[i]  so we directly compute r-l
                count  = count +  (r - l) 
                # checking for more possible solutions 
                r -= 1; 
            
            else: 

                # if not possible check for 
                # higher values of arr[l] 
                l += 1; 
    print("No of possible solutions: ", count); 

# Driver Code 
if __name__ == '__main__': 

    A = [ 4, 6, 3, 7 ]; 

    CountTriangles(A); 
    




'''
Time Complexity = O(n^2 +nlogn) ==O(n^2)

Space Complexity = O(1)
https://www.geeksforgeeks.org/find-number-of-triangles-possible/




Method 3: The time complexity can be greatly reduced using Two Pointer methods in just two nested loops.
'''