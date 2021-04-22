#  string obtained by  concatenation of different  rows of Zig-Zag fashion 

 
def printZigZagConcat(str1, n):
  length = len(str1)
  
  row = 0
  down = True
  resultlist = ['' for x in range(length)]
  
  for x in range(length):
    resultlist[row] += str1[x] 
    print(resultlist)

  # If last row is reached, change direction to 'up' 
    if row == n - 1: 
      down = False

    # If 1st row is reached, change direction to 'down' 
    elif row == 0: 
      down = True

    # If direction is down,# increment, else decrement 
    if down: 
      row += 1
    else: 
      row -= 1
  




# Driver Code 
str = "GEEKSFORGEEKS"
n = 3
printZigZagConcat(str, n) 

'''
Time Complexity: O(len) where len is length of input string.
Auxiliary Space: O(len)

'''