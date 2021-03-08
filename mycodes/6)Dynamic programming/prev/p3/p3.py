# Dynamic Programming Python implementation of Min Cost Path 
# problem 
R = 3
C = 3

def minCost(cost, m, n): 

    # Instead of following line, we can use int tc[m+1][n+1] or 
    # dynamically allocate memoery to save space. The following 
    # line is used to keep te program simple and make it working 
    # on all compilers. 
    tc = [[0 for x in range(C)] for x in range(R)] 
    
    tc[0][0] = cost[0][0] 

    #step1)fill first rightmost column of tc..... Initialize first column of total cost(tc) array 
    for i in range(1, m+1): 
        tc[i][0] = tc[i-1][0] + cost[i][0] 
    

    print("tc after first for loop\n {}\n".format(tc))

    #step2)fill first topmsot row of tc.... Initialize first row of tc array 
    for j in range(1, n+1): 
        tc[0][j] = tc[0][j-1] + cost[0][j] 
     
    print("tc after second for loop\n {}\n".format(tc))

    #step3)pickout min between 3choices(diagonal,leftmost,uppermost) of tc.........Construct rest of the tc array 
    for i in range(1, m+1):  
        for j in range(1, n+1): 
            tc[i][j] = min(tc[i-1][j-1], tc[i-1][j], tc[i][j-1]) + cost[i][j] 
    print("tc after third for loop\n {} \n".format(tc))

  
    return tc[m][n] 
  
# Driver program to test above functions 
cost = [[1, 2, 3], 
        [4, 8, 2], 
        [1, 5, 3]] 
m=2
n=2
print("The minimum cost between (0,0) to ({},{}) is : {} ".format(m,n,minCost(cost, m, n)))




'''

https://www.youtube.com/watch?v=aZNrXG4VqzA

https://www.geeksforgeeks.org/min-cost-path-dp-6/



Time complexity = O(n)+O(n)+O(mn) ==O(mn)

Space complexity = O(n^^2)  due to tc matrix

Note:Time Complexity of the DP implementation is O(mn) which is much better than Naive Recursive implementation.












'''
