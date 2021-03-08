
def pairindex(arr,sum_1):
    for x in range(len(arr)):
        tmp = arr[x]

        for y in range(len(arr)):
            
            if arr[x] + arr[y] == sum_1:
                print("pair found at index {} and {} ({} + {})".format(x,y,arr[x] ,arr[y]))
                return







arr = [8,7,2,5,3,1]
sum_1 = 10
pairindex(arr,sum_1)