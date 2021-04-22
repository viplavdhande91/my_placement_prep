#Sliding Window Maximum (Maximum of all subarrays of size k)

def slide_window_max(arr,k):
    loopvar = len(arr) - k+1 
    
    i = 0
    j = 1
    k = 2

    while loopvar:
        if arr[i] >= arr[j] and arr[i] >= arr[k] :
            print("Maximum of {} {} {} is  {} ".format(arr[i],arr[j],arr[k],arr[i]))
        elif arr[j] >=arr[i] and arr[j] >= arr[k]:
            print("Maximum of {} {} {} is  {} ".format(arr[i],arr[j],arr[k],arr[j]))
        else:
            print("Maximum of {} {} {} is  {} ".format(arr[i],arr[j],arr[k],arr[k]))

        i+=1
        j+=1
        k+=1

        loopvar-=1







arr = [8, 5, 10, 7, 9, 4, 15, 12, 90, 13]
k = 4

slide_window_max(arr,k)


'''
T.C = O(n)
S.C = O(1)




'''