#Largest Sum Contiguous Subarray by kadane algo


def kadane(arr):
    subarr_sum = 0
    k = -9999999 #for finding max

    

    for x in range(len(arr)):
        subarr_sum = subarr_sum + arr[x]


        if arr[x] > subarr_sum:  #two lines of algo
            subarr_sum = arr[x]

        if subarr_sum > k:   #for finding maximum among all subarr_sum instances
            k = subarr_sum



    print("Largest Sum of Contiguous Subarray : {}".format(k))






arr = [-2, -3, 4, -1, -2, 1, 5, -3] 
kadane(arr)




'''

T.C = O(n)

S.C = O(1)

'''