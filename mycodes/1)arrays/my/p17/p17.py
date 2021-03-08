#Largest Sum Contiguous Subarray by kadane algo
def kadane(arr):
    subset_sum = 0
    max_so_far = -9999999

    

    for x in range(len(arr)):
        subset_sum = subset_sum + arr[x]

        print("subset_sum : " + str(subset_sum))

        if arr[x] > subset_sum:
            subset_sum = arr[x]

        if subset_sum > max_so_far:   #this will be true always
            max_so_far = subset_sum

        print("max_so_far : " + str(max_so_far))

        print('\n')

    return max_so_far






if __name__ == '__main__':
    arr = [-2, -3, 4, -1, -2, 1, 5, -3] 
    print(kadane(arr))




'''

T.C = O(n)

S.C = O(1)

'''