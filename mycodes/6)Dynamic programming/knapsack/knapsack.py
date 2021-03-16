
#0/1 knapsack problem by bottom up memoziation DP approach


weight_arr = [10,20,30]

value_arr = [60,100,120]
W = 51
n = len(value_arr)
rows = n+1
cols =W+1

t = [[-1 for x in range(cols)] for y in range(rows)]




def knapsack(value_arr,weight_arr):
    print("rows",len(t))
    print("cols",len(t[0]))



#initialization of T and F
    for p in range(rows):
        for q in range(cols):
            if p == 0 or q==0:
                t[p][q] = 0
    #filling each cell value
    

    for i in range(1,rows):
        for w in range(1,cols):
            
            if weight_arr[i-1]<= w:
                 t[i][w] = max(value_arr[i-1] + t[i-1][w-weight_arr[i-1]] , t[i-1][w])
                
            elif weight_arr[i-1] > w:
                t[i][w] = t[i-1][w]


    for x in t:
        print(x)






  
profit = knapsack(value_arr,weight_arr)


print("profit is: {}".format(profit))


'''

Complexity Analysis: 

Time Complexity: O(n*W). 
As redundant calculations of states are avoided.

Auxiliary Space: O(n*W). 
The use of 2D array data structure/LIST OF LIST for storing intermediate states-:














'''