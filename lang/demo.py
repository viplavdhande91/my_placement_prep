#TDP using recursion DP for pallindrome partitioning
import sys

string = [1,2,3,4,6]

size = len(string)


def mysum(i,j,string):
  
  mysum1 = 0
  for x in range(j-i+1):
    mysum1+=string[i]
    i+=1

  return mysum1
    



def solve(string):
  i=1
  j = len(string)-1


  
  for k in range(i,j):
    tempans1 = mysum(0,k-1,string) 

    tempans2 = mysum(k+1,j,string) 
    
   # print("tempans1 ",tempans1)
   # print("tempans2 ",tempans2)
    #print("\n")

    if tempans1 == tempans2:
      print(k)








 
res = solve(string)


'''


Time Complexity: O(n3 )
Auxiliary Space: O(n2)



'''