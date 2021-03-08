#  code for Find the two repeating elements in a given array 


def printRepeating(arr,size) : 
    count = [0] * size 
    print("Repeating elements are") 
    for i in range(0, size):
        temp = arr[i]
        
        if(count[temp] == 1):
            print(arr[temp])
        else:
            count[temp] =  count[temp] + 1




        
     

# Driver code 
arr = [4, 2, 4, 5, 2, 3, 1] 
size = len(arr) 
printRepeating(arr, size) 

'''
https://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/




Method 2 (Use Count array)

Time Complexity: O(n)
Auxiliary Space: O(n)




OUTPUT


Repeating elements are
2
4

C:\Users\Viplav\Desktop\WORK\placements\python>










'''