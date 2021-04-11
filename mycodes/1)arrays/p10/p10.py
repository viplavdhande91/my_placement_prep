# Optimized method to find equilibrium index of an list

def equilibriumIndex(A):

    totalsum = sum(A)
    print(totalsum)

    # leftsum stores sum of elements of sub-list A[0],..,A[i-1]
    leftsum = 0

    indices = []

    # traverse list from left to right
    for i in range(len(A)):

       
        # sum of elements of right sub-list A[i+1.....n-1] is rightsum = (total - (A[i] + leftsum))
        if leftsum == totalsum - (A[i] + leftsum):
            indices.append(i)

        # new leftsum = (A[0] + A[1] + ...A[i-1])+ A[i]
        leftsum = leftsum + A[i]

    print("Equilibrium Index found at", indices)




# Program to find the equilibrium index of an list

A = [0, -3, 5, -4, -2, 3, 1, 0]

equilibriumIndex(A)




'''
https://www.techiedelight.com/find-equilibrium-index-array/


Time Complexity == O(n)
Space C == O(1)

'''