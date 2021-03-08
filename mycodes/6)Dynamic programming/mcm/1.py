#TDP using recursion DP for pallindrome partitioning
import sys

string = 'abcbak'

size = len(string)

rows = size
cols = size

t = [[-1 for x in range(cols)] for y in range(rows)] 

def ispallindrome(string,p,q):


  boolvar = False  
  
  while (p < q):
    if string[p] == string[q]:
      boolvar = True
    else:
      boolvar =False
      return boolvar

    p+=1
    q-=1

    return boolvar



def solve(string,i,j):

#base condition 1
  if i >= j:
    return 0

#base condition 2
  
  if (ispallindrome(string,i,j) == True):
    return 0
  print("i :{} j: {}".format(i,j))

#dp checking
  if t[i][j] != -1:
    return t[i][j]






  mn = sys.maxsize
  
  for k in range(i,j):
    tempans = solve(string,i,k) +solve(string,k+1,j) + 1

    if tempans < mn:
      mn = tempans

  t[i][j] = mn
  #print(t[i][j])

  return t[i][j]




i=0
j = len(string)-1
 
res = solve(string,i,j)

for x in t:
  print(x)
print("minimum chops for pallindrome partitioning is {}".format(res))


'''


Time Complexity: O(n3 )
Auxiliary Space: O(n2)



'''