# Minimum Subset Sum Difference

import sys
arr = [1,2,7]
sum1 = 10
n = len(arr)

rows = n+1
cols= sum1 + 1



def min_diff_of_sum(arr,n):
 
  last_arr = ss(arr,sum1,n)

  range1 = sum(arr)

  halfrange = int(len(last_arr)/2)
  
  mindiff = sys.maxsize
  print(last_arr)

  for x in range(halfrange):
    if last_arr[x] == True:
      mindiff = min(mindiff,range1 - 2*x)

  print(mindiff)




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
        t[i][j] = t[i-1][j] or t[i-1][j-arr[i-1]]

      elif j < arr[i-1]:
        t[i][j]=t[i-1][j]


  #print(t)



  return t[n] 




if __name__ == '__main__':
  min_diff_of_sum(arr,n)

