#Find common elements in three sorted arrays


def findcommon(arr1,arr2,arr3):
    len1 = len(arr1)
    len2 = len(arr2)
    len3 = len(arr3)

  
    
    i = 0
    j = 0
    k = 0
    

    print("common elemenst are:")
    while (i<len1 and j<len2 and k<len3):
        if (arr1[i] == arr2[j] and arr1[i] == arr3[k]):
            print(arr1[i])
            i+=1
            j+=1
            k+=1

        elif arr1[i] < arr2[j] and  arr1[i] < arr3[k]: 
            i += 1
              
        elif arr2[j] < arr3[k] and  arr2[j] < arr1[i]: 
            j += 1
          
        else: 
            k += 1

       





if __name__ == '__main__':
    arr1 = [10,20,30,31,40,50]
    arr2 = [11,20,21,30,31,]
    arr3 = [20,21,30,31]

    findcommon(arr1,arr2,arr3)




'''

Time complexity == O(n1 + n2 + n3). 
In the worst case, the largest sized array may have all small elements and middle-sized array has all middle elements.

e.g worst case e.g

arr1 = 10 ,20,28 ,31 40,50

arr2 =111,191,211,301,611

arr3 = 1180,1190,1301,1711




'''