#print shortest common Supersequence
X = 'AGGTAB'
Y = 'GXTXAYB'

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

      if  X[i-1] == Y[j-1]: #remember Y[i-1] == X[j-1]
        t[i][j] =  1 + t[i-1][j-1]

      else:
        t[i][j] =  max(t[i][j-1],t[i-1][j])

#step2) printing lcs
  print(i)
  print(j)
  subseq = ''

  while (i > 0 and j > 0):
    if X[i-1] == Y[j-1]:
      subseq += X[i-1]
      i-=1
      j-=1
    else:
      if t[i][j-1] > t[i-1][j]:
        j-=1
      else:
        i-=1


#step3) reverse the seq output
  subseq = subseq[::-1]

  print("longest common subsequence is: {} ".format(subseq))
  

  strlist = []
#step4)subtract LCS from X+Y
  for x in X+Y:
    strlist.append(x)
  print("X+Y is: {} ".format(strlist))


  i = 0;

  len_of_ss = len(subseq) 

  for x in range(len(strlist)):
    if len_of_ss == i:
      break
  
    if strlist[x] == subseq[i]:
      strlist[x] = '#'
      i+=1

  supersequence = ""

  for x in strlist:
    if x is not '#':
      supersequence+=x
    



  print("strlist is: {} ".format(strlist))
  print("Shortest common supersequence is: {} ".format(supersequence))

 

  

 
LCS(X,Y,len(X),len(Y))
 