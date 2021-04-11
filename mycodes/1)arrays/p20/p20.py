#Trapping Rain Water by  Viplav Patil by own

def leftmaxx(i,arr):
    leftmax = 0

    if i == 0:
        leftmax = arr[i]
        return leftmax
    else:
        leftmax = max(arr[0:i+1])
        return leftmax

    

def rightmaxx(i,n,arr):
    rightmax = 0

    if i == n-1:
        rightmax = arr[i]
        return rightmax
    else:
        rightmax = max(arr[i:n])
        return rightmax


def water_trapping_quantity(arr,n):
    trapped_quantity = 0
    for i in range(n):
        current_num = arr[i]


        leftmax =  leftmaxx(i,arr)
        rightmax =  rightmaxx(i,n,arr)

        #print(leftmax)
        #print(rightmax)
        #print("\n")
        
        temp = min(leftmax,rightmax) - current_num
        if temp < 0:
            temp = 0

        trapped_quantity += temp  
        #print(trapped_quantity)

    print("trapped water quantity is {}".format(trapped_quantity))

        




if __name__ == '__main__':
    arr = [3, 0, 2, 0, 4]
    water_trapping_quantity(arr,len(arr))


'''
https://www.youtube.com/watch?v=7stXjaFwOCk


T.c = O(n-square) because everytime unordered array is scanned for each item to find either leftmax or rightmax

S.C =  O(1)




https://www.geeksforgeeks.org/trapping-rain-water/

'''