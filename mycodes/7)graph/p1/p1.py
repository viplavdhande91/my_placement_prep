#number of islands

#https://www.youtube.com/watch?v=__98uL6wst8&ab_channel=TECHDOSE


graph = [[1,1,0,0,0],
         [1,1,0,0,0,],
         [0,0,1,0,0,],
         [0,0,0,1,1,]
         ,] 



rows = 4
cols = 5


def mark_current_islands(x,y):

    
    if  x < 0 or y < 0 or x>=rows or y>=cols:
      return

    if graph[x][y] != 1:
      return 
    
    print("x: {} , y {}".format(x,y))

    graph[x][y] = 2; 


    

    mark_current_islands(x,y+1)
    mark_current_islands(x+1,y)
    mark_current_islands(x,y-1)

    mark_current_islands(x-1,y)


   




def no_of_islands():
  no_of_islands = 0;



  for x in range(rows):
    for y in range(cols):

      if graph[x][y] == 1:
        print("oh teri start ")
        no_of_islands+=1

        mark_current_islands(x,y)
        print(graph)
        print("\n")




  print("no_of_islands : ",no_of_islands)


     


no_of_islands()