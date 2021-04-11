#TDP DP for matrix chain multiplication

#Note: view recursion tree
import sys

arr = [40, 20, 30, 10, 30]

size = len(arr)

rows = size
cols = size

t = [[-1 for x in range(cols)] for y in range(rows)] 


def solve(arr,i,j):

  print("i : {} j : {}".format(i,j))
#base condition for one matrix

  if i == j:
    return 0
#checking for invalid inputs
  if i > j:
    return 0

#dp checking
  if t[i][j] != -1:
    return t[i][j]

  mn = sys.maxsize
  
  for k in range(i,j):
    tempans = solve(arr,i,k) +solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j]

    if tempans < mn:
      mn = tempans

  t[i][j] = mn
  #print(t[i][j])

  return t[i][j]




i = 1
j = len(arr)-1
 
res = solve(arr,i,j)


for x in t:
  print(x)
    
print("MCM is {}".format(res))


'''


Time Complexity: O(n3 )
Auxiliary Space: O(n2)



  '''