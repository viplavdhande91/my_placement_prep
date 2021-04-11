#rod cutting problem by bottom up memoziation DP approach

price_arr = [10,40,50,70]
len_arr = [1,3,4,5]
L = 8
n = len(price_arr)

rows = n+1
cols= L + 1

t = [[-1 for x in range(cols)] for y in range(rows)] 

def rodcutting(price_arr,len_arr,L,n):

  #base condition
  if n == 0 or L == 0:
    return 0

  if t[n][L] != -1:
    return t[n][L]
  #actual cases
  if (len_arr[n-1]<= L):
    t[n][L] =  max(price_arr[n-1]+rodcutting(price_arr,len_arr,L - len_arr[n-1],n),
      rodcutting(price_arr,len_arr,L,n-1))
    print(t[n][L])
    
    return t[n][L]


  elif (len_arr[n-1] > L):
    t[n][L] =  rodcutting(price_arr,len_arr,L,n-1)
    print(t[n][L])

    return t[n][L]





if __name__ == '__main__':
  

  profit = rodcutting(price_arr,len_arr,L,n)
  print(t)


  print("profit is: {}".format(profit))


'''

Complexity Analysis: 

Time Complexity: O(n*L). 
As redundant calculations of states are avoided.

Auxiliary Space: O(n*L). 
The use of 2D array data structure/rodcuttingIST OF rodcuttingIST for storing intermediate states-:














'''