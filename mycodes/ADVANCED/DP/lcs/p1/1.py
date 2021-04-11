#Length of Longest common substring
#https://www.youtube.com/watch?v=UZRkpGk943Q
'''
if match:
  1+diagonal element
else:
  t[i][j] = 0

'''
X = 'abcdgh'
Y = 'acdghr'
m = len(X)
n = len(Y)

rows = m+1
cols = n+1

t = [['' for x in range(cols)] for y in range(rows)] 


def LCS(X,Y,m,n):

  for p in range(rows):

    for q in range(cols):
      if p == 0:
        t[p][q] = 0
      if q == 0:
        t[p][q] = 0

  
  k =-1
  #filling each cell value
  for i in range(1,rows):
    for j in range(1,cols):

      if  X[i-1] == Y[j-1]:
        t[i][j] =  1 + t[i-1][j-1]

        if k < t[i][j]:
          k = t[i][j]
      else:
        t[i][j] =  0

  return k


 
res = LCS(X,Y,len(X),len(Y))
for x in t:
  print(x)
print("len of Longest Common Substring: {}".format(res))