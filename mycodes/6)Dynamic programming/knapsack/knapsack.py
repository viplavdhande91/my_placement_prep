#0/1 knapsack problem by bottom up memoziation DP approach

value_arr = [60,100,120]
weight_arr = [10,20,30]
W = 50
n = len(value_arr)


t = dict()

def knapsack(value_arr,weight_arr,W,n):

  mystr = str(n) + "_"  + str(W)


  #base condition
  if n == 0 or W == 0:
    return 0

  if mystr in t:
    return t[mystr]
  #actual cases
  
  if (weight_arr[n-1]<= W):

    val =  max(value_arr[n-1]+knapsack(value_arr,weight_arr,W - weight_arr[n-1],n-1),knapsack(value_arr,weight_arr,W,n-1))
    
    t[mystr] = val

    return val


  elif (weight_arr[n-1] > W):
    val =  knapsack(value_arr,weight_arr,W,n-1)
    
    t[mystr] = val
    
    return val






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