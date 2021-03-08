'''
Maximum difference between two elements such that larger element appears after the smaller number

https://www.geeksforgeeks.org/maximum-difference-between-two-elements/

'''
def maxDiff(arr, n): 
    
    # Initialize Result 
    maxDiff = -1
    
    # Initialize max element from 
    # right side 
    maxRight = arr[n - 1] 

    for i in range(n - 2, -1, -1): 
        if (arr[i] > maxRight): 
            maxRight = arr[i] 
        else: 
            diff = maxRight - arr[i] 
            if (diff > maxDiff): 
                maxDiff = diff 
    return maxDiff 

# Driver Code 
if __name__ == '__main__': 
    arr = [1, 2, 90, 110, 10] 
    n = len(arr) 
    
    # Function calling 
    print("Maximum difference is",maxDiff(arr, n)) 




'''
Time complexity = O(n-1) = O(n)
Space complexity = O(1)
'''