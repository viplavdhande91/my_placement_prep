#Egg Dropping Puzzle
import sys


def eggdrop(arr,e,f):
  print('i m called')
#base cases
# If there are no floors, then no trials  needed. OR if there is one floor, one attempt needed.  
  if f==0 or f==1:
    return f
 # We need f attempts for one egg  and k floors 
  if e == 1:
    return f
  


  mn =sys.maxsize
  
  low = 0
  high = 0

  for k in range(1,f+1):
#DP for low variable optimization
   
    
    low = eggdrop(arr,e-1,k-1)

#DP for high variable optimization

    high = eggdrop(arr,e,f-k)


    temp = 1+ max(low ,high)

    if temp < mn:
      mn = temp
  

  return mn





e = 2
f = 5

arr = [1,2,3,4,5]
res = eggdrop(arr,e,f)
print(res)






'''
T.C = O(e*f * f) ===>e*f ==function calls,f = no of k loop runs per func in worst case
S.c = O(e*f) size dictionary

'''