# Minimum number of deletion in a string to make it a palindrome

X = 'agbcba'


def LCS():
  m = len(X)

  Y = X[::-1]
  n = len(Y)

  cols = m+1
  rows = n+1

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

  
  returnvar = t[i][j]
#step2) printing lcs
  #print(i)
  #print(j)
  subseq = ''

  while (i > 0 and j > 0):
    if Y[i-1] == X[j-1]:
      subseq += Y[i-1]
      i-=1
      j-=1
    else:
      if t[i][j-1] > t[i-1][j]:
        j-=1
      else:
        i-=1


#step3) reverse the seq output
  subseq = subseq[::-1]
  
  print(t)
  print("pallindromic string after  minimum deletions is: {} ".format(subseq))

  return returnvar



if __name__ == '__main__':
 
  res = LCS()

  print("minimum deletions : {}".format(res))
