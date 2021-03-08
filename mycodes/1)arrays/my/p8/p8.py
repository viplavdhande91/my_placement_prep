
def sorted_sum_up(arr1,arr2):
    len_arr1 = len(arr1)
    len_arr2 = len(arr2)
    res = []
    
    i = 0
    j = 0
    k = 0

    #step1)comapre arr1[item] vs arr2[item]
    while (i<len_arr1 and j<len_arr2):
        if arr1[i]<arr2[j]:
            res.append(arr1[i])
            i+=1
        else:
            res.append(arr2[j])
            j+=1
    #step2)if remaining items in arr1 are more
    while i<len_arr1:
        res.append(arr1[i])
        i+=1
      

    #step3)if remaining items in arr2 are more

    while j<len_arr2:
        res.append(arr2[j])
        j+=1
    print("Final Array is {} ".format(res))    







if __name__ == '__main__':
    arr1 = [1,3,5,7,9]
    arr2 = [2,4,8,10,11,487]
    sorted_sum_up(arr1,arr2)

'''
https://www.youtube.com/watch?v=xF3TU-QlhJQ


Time complexity =O(n)
Space Complexity = O(m+n)

'''