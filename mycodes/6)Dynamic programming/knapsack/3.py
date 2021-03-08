# count subset sum

arr = [1,5,11,5]
sum1 = 11
n = len(arr)

rows = n+1
cols= sum1 + 1



def count_partition(arr,n):
 
  r = ss(arr,sum1,n)

  return r 



def ss(arr,sum1,n):
  t = [[ '' for x in range(cols)] for y in range(rows)] 

#initialization of T and F
  for p in range(rows):

    for q in range(cols):
      if p == 0:
        t[p][q] = 0
      if q == 0:
        t[p][q] = 1

#filling each cell value
  for i in range(1,rows):
    for j in range(1,cols):

      if j >= arr[i-1]:
        t[i][j] = t[i-1][j] + t[i-1][j-arr[i-1]]

      elif j < arr[i-1]:
        t[i][j]=t[i-1][j]


  print(t)



  return t[n][sum1] 




if __name__ == '__main__':
  res = count_partition(arr,n)


  print("subset count is: {}".format(res))

