#  program to find a triplet  returns true if there is triplet  with sum equal to 'sum' present 
# in A[]. Also, prints the triplet 
def find3Numbers(A, arr_size, sum): 

    #step1) Sort the elements 
    A.sort() 

    # Now fix the first element 
    # one by one and find the 
    # other two elements 
    for i in range(0, arr_size): 
    

        # To find the other two elements, 
        # start two index variables from 
        # two corners of the array and 
        # move them towards each other 
        
        # index of the first element 
        # in the remaining elements 
        l = i + 1
        
        # index of the last element 
        r = arr_size-1
        while (l < r): 
        
            if( A[i] + A[l] + A[r] == sum): 
                print("Triplet is {} {} {}".format(A[i], A[l], A[r])); 
                return True
            
            elif (A[i] + A[l] + A[r] > sum):  #coz if sum of 3 items is greater then A[r] is culprit so deacrease r
                r -= 1

            else: # A[i] + A[l] + A[r] < sum   #coz if sum of 3 items is smaller then A[l]  has to be increased towards righmtost 
                l += 1 
    # If we reach here, then  no triplet was found 
    return False




# Driver program to test above function 
A = [1, 4, 45, 6, 10, 8] 
sum = 22
arr_size = len(A) 

find3Numbers(A, arr_size, sum) 





'''
Complexity Analysis:
Time complexity: O(N^2).
There are only two nested loops traversing the array, so time complexity is O(n^2). 
Two pointers algorithm takes O(n) time and the first element can be fixed using another nested traversal.
Space Complexity: O(1).
As no extra space is required.



https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/

method2

'''


















'''


by me

def sum_3_find(arr,sum1):
    for x in range(len(arr)):
        for y in range(len(arr)):
            for z in range(len(arr)):


                if arr[x] + arr[y] +arr[z] == sum1:
                    print("{},{},{}".format(arr[x],arr[y],arr[z]))
                    return




if __name__ == '__main__':
    arr = [12,3,4,1,6,9]
    
    sum1 = 24
    sum_3_find(arr,sum1)


'''