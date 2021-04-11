#Length of LCS

X = 'aabd'
Y = 'aacd'
m = len(X)
n = len(Y)

rows = n+1
cols = m+1

t = [[-1 for x in range(cols)] for y in range(rows)] 



def LCS(X,Y,m,n):
  if m == 0 or n==0:
    return 0

  if t[m][n] != -1:
    return t[m][n]

  
  for i in range(rows):
    
    for j in range(cols):
      
       if i == 0 or j == 0:
        t[i][j] = 0
  
   
 

  for i in range(1,rows):
    
    for j in range(1,cols):
      print(i,j)
      
      if X[i-1] == Y[j-1]:
        t[i][j] = 1 + t[i-1][j-1]
      else:
        t[i][j] = max(t[i][j-1],t[j][i-1])

  for x in t:
    print(x)


  






if __name__ == '__main__':
 
  res = LCS(X,Y,len(X),len(Y))

 
  print("len of LCS: {}".format(t[m][n]))