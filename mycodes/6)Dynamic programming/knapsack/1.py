#subset sum problem by top down DP approach

arr = [2,3,7,8,10]
sum1 = 11
n = len(arr)

rows = n+1
cols= sum1 + 1





def ss(arr,sum1,n):
  t = [[ '' for x in range(cols)] for y in range(rows)] 

#initialization of T and F
  for p in range(rows):

    for q in range(cols):
      if p == 0:
        t[p][q] = False
      if q == 0:
        t[p][q] = True

#filling each cell value
  for i in range(1,rows):
    for j in range(1,cols):

      if j >= arr[i-1]:
        t[i][j] = t[i-1][j-arr[i-1]] or t[i-1][j]

      elif j < arr[i-1]:
        t[i][j]=t[i-1][j]


  print(t)



  return t[n][sum1] 




if __name__ == '__main__':
  res = ss(arr,sum1,n)


  print("subset sum possible is: {}".format(res))


'''

Complexity Analysis: 

Time Complexity: O(n*W). 
As redundant calculations of states are avoided.

Auxiliary Space: O(n*W). 
The use of 2D array data structure/LIST OF LIST for storing intermediate states-:














'''