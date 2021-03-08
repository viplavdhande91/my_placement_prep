# equal partition problem by top down DP approach

arr = [1,5,11,5]
sum1 = 11
n = len(arr)

rows = n+1
cols= sum1 + 1



def equal_partition(arr,n):
  arr_sum = sum(arr)

  if arr_sum % 2 != 0 :
    return False

  else:
    k = ss(arr,int(arr_sum/2),n)
    return k


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
  res = equal_partition(arr,n)


  print("Equal partition possible is: {}".format(res))


