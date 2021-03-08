
# cycle detection in directed graph


m = 5  #no of vertices
visited = list()
    
graph = [[0,1,0,0,0],
         [0,0,0,0,0],
         [0,1,0,1,0],
         [0,0,0,0,1],
         [1,0,1,0,0]]    #5*5

mylist_global =[]

def is_cycle(graph, node):
    print(visited)
    print("is_cycle(graph,{})".format(node))


    if node in visited:
        #print("Bro,Cycle detect hogyee")
        mylist_global.append(True)
        return
     
    if graph[node].count(0) == m:     #dead end (means from this node no connection to any node)
        return
       
    if node not in visited:
        visited.append(node)
       #print(node)
        

        for i in range(m):
          if graph[node][i] == 1:
            is_cycle(graph, i)


      
   

for x in range(m):
    print("yo yo")
   
    is_cycle(graph, x)
   
    visited.clear()

    print("\n")





if len(mylist_global) == 0:
    print("No cycle detetcted")

else:
    print("Cycle detetcted")

print(mylist_global)

    



'''

https://www.youtube.com/watch?v=0dJmTuMrUZM&t=296s&ab_channel=TECHDOSE


'''