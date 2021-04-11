# Python function to sort the array arr[0..n-1] in wave form, 
def sortInWave(arr, n): 

    #sort the array
    arr.sort()
    print(arr)
    # Swap adjacent elements
    for i in range(0,n-1,2):
        arr[i], arr[i+1] = arr[i+1], arr[i]





# Driver progrM 
arr = [10, 90, 49, 2, 1, 5, 23] 
sortInWave(arr, len(arr)) 
print(arr)



'''
T.C = O(nlogn)


Example:
   
    Input:  arr[] = {2, 4, 6, 8, 10, 20}
    Output: arr[] = {4, 2, 8, 6, 20, 10} OR
                 any other array that is in wave form 


'''