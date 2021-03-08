

# For a given array arr[], returns the maximum j - i  such that arr[j] > arr[i] 
def maxIndexDiff(arr, n): 
    maxDiff = 0; 
    LMin = [0] * n 
    RMax = [0] * n 

    #step1) Construct LMin[] such that LMin[i] stores the minimum  value by comparison with every element of arr
    LMin[0] = arr[0]  #setting up value
    
    for i in range(1, n): 
        LMin[i] = min(arr[i], LMin[i - 1]) 
    print("LMin is {}".format(LMin))

    #step2) Construct RMax[] such that  RMax[j] stores the maximum value by comparison with every element of arr from end.
    RMax[n - 1] = arr[n - 1]  #setting up value
    
    


    for j in range(n - 2, -1, -1): 
        RMax[j] = max(arr[j], RMax[j + 1]);

    print("RMax is {}".format(RMax))


    #step3) Traverse both arrays from left  to right to find optimum j - i  This process is similar to  merge() of MergeSort 
    

    i, j = 0, 0
    maxDiff = -1
    while (j < n and i < n): 
        if (LMin[i] < RMax[j]): 
            maxDiff = max(maxDiff, j - i) 

            j = j + 1
        else: 
            i = i+1

    return maxDiff 

# Driver Code 
if(__name__ == '__main__'): 
    arr = [9,2,3,18,0] 
    n = len(arr) 
    maxDiff = maxIndexDiff(arr, n) 
    print (maxDiff) 



'''
https://www.geeksforgeeks.org/given-an-array-arr-find-the-maximum-j-i-such-that-arrj-arri/

Time Complexity: O(n)
Auxiliary Space: O(n)

'''














'''
by me


def sort1(list1):
    return list1[2]



def maxdiff(arr):
    
    arr1 = arr.copy()
    list1 = []
    for i in range(len(arr)):
        temp_i = arr[i]

        for j in range(len(arr)):
            if arr1[j] > arr1[i]:
                list1.append((i,j,j-i))
    


    list1.sort(key = sort1,reverse = True)
    

    print("{} (j = {} ,i = {} )".format(list1[0][2] ,list1[0][1],list1[0][0]  ))


    print(list1)



if __name__ == '__main__':
    arr = [9,2,3,4,5,6,7,8,18,0]
    maxdiff(arr)
















'''