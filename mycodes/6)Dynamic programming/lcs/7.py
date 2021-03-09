# Minimum number of deletion in a string to make it a palindrome


X = 'agbcba'

Y = 'abcbga' #reversal

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

  
#step2) printing lcs
  #print(i)
  #print(j)
  lps = ''

  while (i > 0 and j > 0):
    
    if X[i-1] == Y[j-1]:
      lps += X[i-1]
      i-=1
      j-=1
    else:
      if t[i][j-1] > t[i-1][j]:
        j-=1
      else:
        i-=1


#step3) reverse the seq output
  lps = lps[::-1]
  print("LPS is {}".format(lps))
  
  print("No of Deletions are {}".format(len(X) - len(lps)))

  

 
LCS(X,Y,len(X),len(Y))

print("LPS is {}".format(t[m][n]))




for x in t:
  print(x)



