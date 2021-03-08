# count min numbers coin required to produce given sum

coin_arr = [1,2,3]
sum1 = 5
n = len(coin_arr)

rows = n+1
cols= sum1 + 1

import sys

def count_coin_denominations(coin_arr,n):
 
  r = ss(coin_arr,sum1,n)

  return r 



def ss(coin_arr,sum1,n):
  t = [[ '' for x in range(cols)] for y in range(rows)] 

#initialization row1 and col 1
  for p in range(rows):

    for q in range(cols):
      if p == 0:
        t[p][q] = sys.maxsize
      if q == 0:
        t[p][q] = 0

  
#initialization of col2

  for p in range(rows):

    for q in range(1,cols):
     
      if p == 1:
        if q % coin_arr[0] == 0:
          t[p][q] = int(q/coin_arr[0])
        else:
          t[p][q] =sys.maxsize 


  print(t)


#filling each cell value
  for i in range(1,rows):
    for j in range(1,cols):

      if j >= coin_arr[i-1]:
        t[i][j] = min(t[i-1][j] ,1+t[i][j-coin_arr[i-1]])

      elif j < coin_arr[i-1]:
        t[i][j]=t[i-1][j]





  return t[n][sum1] 




if __name__ == '__main__':
  res = count_coin_denominations(coin_arr,n)


  print("min {} coins are required to produce {} sum from given array".format(res,sum1))

