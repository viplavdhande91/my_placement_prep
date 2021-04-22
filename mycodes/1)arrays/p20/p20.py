#Trapping Rain Water by  Viplav Patil 
def leftmaxx(i,arr):
    leftmax = 0

    
    leftmax = max(arr[0:i+1])
    return leftmax

    

def rightmaxx(i,n,arr):
    rightmax = 0

    
    rightmax = max(arr[i+1:n])
    return rightmax


def water_trapping_quantity(arr,n):
    trapped_quantity = 0

    for i in range(1,n-1):
        tower_height = arr[i]


        leftmax =  leftmaxx(i,arr)
        rightmax =  rightmaxx(i,n,arr)

        print("leftmax is {}".format(leftmax))
        print("rightmax is {}".format(rightmax))
        


        res = min(leftmax,rightmax) - tower_height

        print("res is {}".format(res))
        print("\n")

        if res < 0:
            res = 0  #Note:IF res is negative that means no water is there on particular tower. 


        trapped_quantity += res  
        #print(trapped_quantity)

    print("trapped water quantity is {}".format(trapped_quantity))

        




if __name__ == '__main__':
    arr = [9,1,4,0,2,8,6,3,5]
    water_trapping_quantity(arr,len(arr))


'''
https://www.youtube.com/watch?v=7stXjaFwOCk


T.c = O(n-square) because everytime unordered array is scanned for each item to find either leftmax or rightmax

S.C =  O(1)



https://www.geeksforgeeks.org/trapping-rain-water/

'''