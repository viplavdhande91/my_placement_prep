# Dynamic programming Python implementation  of Longest Increasing Subsequence problem  lis returns length of the longest 
# increasing subsequence in arr of size n 
def lis(arr): 
    n = len(arr) 

    # Declare the list (array) for LIS and 
    # initialize LIS values for all indexes 
    lis = [1]*n 

    # Compute optimized LIS values in bottom up manner 
    for i in range (1 , n): 
        for j in range(0 , i): 
            if (arr[i] > arr[j] and lis[i] < lis[j] + 1) :
                print("j == {}".format(j))
                 lis[i] = lis[j]+1

    # Initialize maximum to 0 to get 
    # the maximum of all LIS 
    maximum = 0

    # Pick maximum of all LIS values 
    for i in range(n): 
        maximum = max(maximum , lis[i]) 

    
    print(lis)






    return maximum 
# end of lis function 

# Driver program to test above function 
arr = [5,8,7,1,9] 
print("Length of lis is", lis(arr)) 



'''
Ref 
https://www.youtube.com/watch?v=mouCn3CFpgg


Method 2: Dynamic Programming.
Complexity Analysis:

Time Complexity: O(n2)
S.C = O(n).  due to Lis array
As nested loop is used.


Auxiliary Space: O(n).
Use of any array to store LIS values at each index.


https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/





'''
