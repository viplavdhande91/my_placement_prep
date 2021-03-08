# Sequence Pattern Matching
X = 'AXY'
m = len(X)
Y = 'ADXCPY'
n = len(Y)

cols = m+1
rows = n+1

def LCS(X,Y,m,n):
 

  t = [['' for x in range(cols)] for y in range(rows)] 

#step1)lcs filling all values and making t table by TDp

  for p in range(rows):

    for q in range(cols):
      if p == 0:
        t[p][q] = 0
      if q == 0:
        t[p][q] = 0


  #filling each cell value
  for i in range(1,rows):
    for j in range(1,cols):

      if  Y[i-1] == X[j-1]: #remember Y[i-1] == X[j-1]
        t[i][j] =  1 + t[i-1][j-1]


      else:
        t[i][j] =  max(t[i][j-1],t[i-1][j])

  print(t)

# MAIN LOGIC
  
  if(t[i][j] == len(X)):
    return True
  else:
    return False



if __name__ == '__main__':
 
  res = LCS(X,Y,m,n)

  if res:
    print("Sequence Pattern Matched")

  else:
    print("Sequence Pattern Not Matched")

