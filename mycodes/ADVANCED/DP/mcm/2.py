#Evaluate TDP Expression To True Boolean Parenthesization Memoized

#calculate no of ways expression can be true

def solve(string,i,j,isbool):
#base condition


#checking for invalid inputs
  if i > j:
    return False
#checking for single input 

  if i == j:
    if isbool == True:
      return string[i] == 'T'
    else:
      return string[i] == 'F'
  print("i : {} j : {} isbool : {}".format(i,j,isbool))

#DP using dict
  
  tempstr = str(i)+'_'+str(j)+'_'+str(isbool)

  if tempstr in t:
    return t[tempstr]




  ans = 0
  
  for k in range(i+1,j,2):
    
    lt = solve(string,i,k-1,True) 
    lf = solve(string,i,k-1,False) 
    rt = solve(string,k+1,j,True) 
    rf = solve(string,k+1,j,False)



    if string[k] == '&':
      
      if isbool == True:
        ans = ans + lt*rt
      else:
        ans = ans + lf*rt + rf*lt + lf*rf

    elif string[k] == '|':
      
      if isbool == True:
        ans = ans + lf*rt + rf*lt + lt*rt
      else:
        ans = ans + lf * rf

    elif string[k] == '^':
      
      if isbool == True:
        ans = ans + lf*rt + rf*lt 
      else:
        ans = ans + lf * rf + rt * lt



  t.update({tempstr:ans})

  return ans
    

  #print(t[i][j])




string = 'T|T&F'

i = 0
j = len(string)-1


t = dict()


isbool =True

res = solve(string,i,j,isbool)

#for x in t.items():
#  print(x)
print("#ways of boolean parenthesiztion: {}".format(res))


'''

Time Complexity: O(n3)
Auxiliary Space: O(n2)

  '''