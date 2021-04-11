#Minimum Number of Platforms Required for a Railway/Bus Station

def min_platform_required(arr,dep):
    needed_platform = 0
    for i in range(len(arr)):
        arr_num = arr[i]
        dep_num = dep[i]
        for j in range(i+1,len(dep)-1,1):
            if arr_num <= arr[j] and dep_num >= arr[j]:
                needed_platform+=1


    if needed_platform == 0:
        needed_platform = 1
    


    print("Minimum needed platform : {} ".format(needed_platform))




if __name__ == '__main__':
    arr = [900, 940, 950, 1100, 1500, 1800]
    dep = [910, 1200, 1120, 1130, 1900, 2000]

    min_platform_required(arr,dep)


'''
T.C = O(n^2)

S.C = O(1)


https://www.geeksforgeeks.org/minimum-number-platforms-required-railwaybus-station/

'''