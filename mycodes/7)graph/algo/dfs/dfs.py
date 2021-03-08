
#Depth First Search (DFS) Algorithm


graph = [[0,1,1,0,0,0,0,0],
         [1,0,0,1,1,0,0,0],
         [1,0,0,0,0,1,1,0],
         
         [0,1,0,0,0,0,0,1],
         [0,1,0,0,0,0,0,1],

         [0,0,1,0,0,0,0,1],
         [0,0,1,0,0,0,0,1],
         [0,0,0,1,1,1,1,0]
         ,] 


m = 8
n = 8

visited = [0 for x in range(m)]


def DFS(x):

  visited[x] = 1
  
  print(x)
  
  for y in range(n):
    if graph[x][y] == 1:
      w = y

      if visited[w] == 0:
        DFS(w)
    
  #print(visited)



def DFT():
  print("Depth first order")
  for x in range(n):
    if visited[x] == 0:
      DFS(x)
 


 


DFT()