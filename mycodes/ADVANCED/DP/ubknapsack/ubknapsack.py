#unbounded knapsack problem by bottom up memoziation DP approach

value_arr = [10,40,50,70]
weight_arr = [1,3,4,5]
W = 8
n = len(value_arr)

rows = n+1
cols= W + 1

t = [[-1 for x in range(cols)] for y in range(rows)] 

def knapsack(value_arr,weight_arr,W,n):

  #base condition
  if n == 0 or W == 0:
    return 0

  if t[n][W] != -1:
    return t[n][W]
  #actual cases
  if (weight_arr[n-1]<= W):
    t[n][W] =  max(value_arr[n-1]+knapsack(value_arr,weight_arr,W - weight_arr[n-1],n),
      knapsack(value_arr,weight_arr,W,n-1))
    print(t[n][W])
    
    return t[n][W]


  elif (weight_arr[n-1] > W):
    t[n][W] =  knapsack(value_arr,weight_arr,W,n-1)
    print(t[n][W])

    return t[n][W]





if __name__ == '__main__':
  

  profit = knapsack(value_arr,weight_arr,W,n)
  print(t)


  print("profit is: {}".format(profit))


'''

Complexity Analysis: 

Time Complexity: O(n*W). 
As redundant calculations of states are avoided.

Auxiliary Space: O(n*W). 
The use of 2D array data structure/LIST OF LIST for storing intermediate states-:














'''