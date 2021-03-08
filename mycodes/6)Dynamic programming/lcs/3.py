#length of shortest common subsequence

X = 'abcdaf'
Y = 'acbcf'
m = len(X)
n = len(Y)


cols = m+1
rows = n+1

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

      if  Y[i-1] == X[j-1]: #remember Y[i-1] == X[j-1]
        t[i][j] =  1 + t[i-1][j-1]


      else:
        t[i][j] =  max(t[i][j-1],t[i-1][j])



  return t[i][j]

#step3) reverse the seq output




if __name__ == '__main__':
 
  res = LCS(X,Y,len(X),len(Y))
  print("length of shortest common supersequence is: {} ".format(m+n-res ))

  print(t)
