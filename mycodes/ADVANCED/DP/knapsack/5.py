# Count the number of subset with a given difference

arr = [1,1,2,3]
diff = 1

n = len(arr)





def count_subset(arr,n):
  sumofs1 = (diff +sum(arr))/2
  sumofs1 = int(sumofs1)
  
  rows = n+1
  cols= sumofs1 + 1

 
  r = ss(arr,sumofs1,n,rows,cols)

  return r 



def ss(arr,sum1,n,rows,cols):
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
  res = count_subset(arr,n)


  print("subset count is: {}".format(res))

