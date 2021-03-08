# Optimized method to find equilibrium index of an list
def equilibriumIndex(A):

    # total stores sum of all elements of the list
    totalsum = sum(A)

    # leftsum stores sum of elements of sub-list A[0..i-1)
    leftsum = 0

    # maintain list of indices
    indices = []

    # traverse list from right to left
    for i in range(len(A)):

       
        # sum of elements of right sub-list A[i+1.....n-1] is
        # (total - (A[i] + left))
        if leftsum == totalsum - (A[i] + leftsum):
            indices.append(i)

        # new leftsum = A[i] + (A[i+1] + A[i+2] + .. + A[i-1])
        leftsum = leftsum + A[i]

    print("Equilibrium Index found at", indices)


# Program to find the equilibrium index of an list
if __name__ == '__main__':

    A = [0, -3, 5, -4, -2, 3, 1, 0]

    equilibriumIndex(A)




'''
https://www.techiedelight.com/find-equilibrium-index-array/


Time Complexity == O(n)
Space C == O(1)

'''