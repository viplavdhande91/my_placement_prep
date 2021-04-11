#  code for Find the two repeating elements in a given array 


def printRepeating(arr,n) : 
    count = [0] * (n+1) 
    for i in range(len(arr)):
        item = arr[i]
        
        
        if count[item] == 0:
            count[item] = 1
        else:
            count[item] = count[item]+1
    
    print(count) #[0, 1, 2, 1, 2, 1]
    print("Repeating elements are")


    for x in range(len(count)):
        if(count[x] > 1):
            print(x)





        
     

# Driver code 
arr = [4, 2, 4, 5, 2, 3, 1] 
n = 5 
printRepeating(arr, n) 

'''
https://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/




Method 2 (Use Count array)

Time Complexity: O(n)
Auxiliary Space: O(n)



OUTPUT


Repeating elements are
2
4



'''