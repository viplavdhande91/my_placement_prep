 # Minimum Number of Insertion and Deletion to convert String a to String b

X = 'heap'
Y = 'pea'

m = len(X)
n = len(Y)


rows = m+1
cols = n+1

t = [['' for x in range(cols)] for y in range(rows)] 


def LCS(X,Y,m,n):

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

      if  X[i-1] == Y[j-1]: 
        t[i][j] =  1 + t[i-1][j-1]

      else:
        t[i][j] =  max(t[i][j-1],t[i-1][j])

  


  

 
LCS(X,Y,len(X),len(Y))

print("LCS is {}".format(t[m][n]))
print("Deletion are {}".format(len(X) - t[m][n]))

print("Insertions are {}".format(len(Y) - t[m][n]))



for x in t:
  print(x)