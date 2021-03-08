
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

def bfs(graph,m,n):

  visited = [0 for x in range(m)]

  queue =[]
  
  u = 0;  #first vertex
  visited[u] = 1
  
  loopvar = m
  
  x = 0
  while(loopvar > 0):
    


  # add adjacent element in queue of node
    
    print(" u : {}".format(u))

    for y in range(n):

      if graph[x][y] == 1:
        w = y;
        
        if visited[w]== 0:
          queue.append(w)  #adding from end
          visited[w] = 1;

    print("queue state is: {}".format(queue))

    print("visited state is: {}".format(visited))
    print("\n")


    if len(queue) == 0:
      return
    else:
      node = queue[0]
      queue.remove(node)
      u =node

    loopvar-=1
    x = node
    


 


bfs(graph,m,n)










