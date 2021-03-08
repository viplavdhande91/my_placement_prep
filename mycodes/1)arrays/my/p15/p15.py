# Python3 program to find the smallest  positive value that cannot be  represented as sum of subsets of a given sorted array 

 
def findSmallest(arr, n): 

	res = 1 


	for i in range (0, n ): 
		if arr[i] <= res: 
			res = res + arr[i] 
		else: 
			break
	return res 


# Driver program to test above function 
arr1 = [1, 3, 4, 5] 
n1 = len(arr1) 
print(findSmallest(arr1, n1)) 

arr2= [1, 2, 7,9,12,17,18] 
n2 = len(arr2) 
print(findSmallest(arr2, n2)) 

arr3= [1,2,3,4,5,6,7,8] 
n3 = len(arr3) 
print(findSmallest(arr3, n3)) 

arr4 = [1, 1, 1, 1] 
n4 = len(arr4) 
print(findSmallest(arr4, n4)) 



'''
Time Complexity = O(n)
Space Complexity = O(1)




https://www.geeksforgeeks.org/find-smallest-value-represented-sum-subset-given-array/

'''