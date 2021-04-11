#Print a given matrix in spiral form

def spiral_print(arr,noofcolumns,noofrows):
  
    i = 0
    while noofrows > 0 and noofcolumns > 0 :
        for x in range(noofcolumns):
            print(arr[i][x+i])

        for x in range(noofrows - 1):
            print(arr[x+1+i][noofcolumns-1+i])
    
        if noofrows != 1:  #in iteration 2 to avoid repeating prining from right to left
            for x in reversed(range(noofcolumns-1)):
                print(arr[noofrows-1 + i][x+i])

        for x in range(noofrows-2,0,-1):
            print(arr[x+i][0])

        noofrows-=2
        noofcolumns-=2
        i+=1







if __name__ == '__main__':
    arr = [ [1, 2, 3, 4], 
            [5,6,7,8], 
            [9,10,11,12],
            [13,14,15,16] ] 
    noofcolumns = 4
    noofrows  = 4

    spiral_print(arr,noofcolumns,noofrows)


'''
T.C = max(O(R),O(C))

S.C = O(1)


Note:4 for loops applied for L->R,T-B,R->L,B->T      {left,right,top,bottom}


'''