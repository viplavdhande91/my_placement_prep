# count max coin denominations/max ways of producing given sum by top down Dynamic Programming

coin_arr = [2, 5, 3, 6]
sum1 = 10
n = len(coin_arr)

rows = n+1
cols= sum1 + 1



def count_coin_denominations(coin_arr,n):
 
  r = ss(coin_arr,sum1,n)

  return r 



def ss(coin_arr,sum1,n):
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

      if j >= coin_arr[i-1]:
        t[i][j] = t[i-1][j] + t[i][j-coin_arr[i-1]]

      elif j < coin_arr[i-1]:
        t[i][j]=t[i-1][j]


  print(t)



  return t[n][sum1] 




if __name__ == '__main__':
  res = count_coin_denominations(coin_arr,n)


  print("coin denominations count is: {}".format(res))

