
def findsubarray(arr,givensum):
    left = 0
    right = 0
    currrent_sum = 0


    while(currrent_sum != givensum):
#step1)increase right pointer towards right and keep left pointer stable        
        if currrent_sum < givensum:
            currrent_sum = currrent_sum +arr[right]

            if currrent_sum <givensum:
                right = right+1

#step2)increase left pointer towards right and substract current sum till currentsum==given sum        
            
        else:
            currrent_sum = currrent_sum - arr[left]
            left=left+1
           

    print("left is {}".format(left))


    print("right is {}".format(right))

    print("For givensum = {} Subarray is {}".format(givensum,arr[left:right+1]))






if __name__ == '__main__':
    arr = [1,4,20,3,10,5]

    givensum = 33

    findsubarray(arr,givensum)




'''
ref:
https://www.youtube.com/watch?v=Ofl4KgFhLsM

Time complexity = O(n)

Space Complexity = O(1)



Output:


C:\\Users\\Viplav\\Desktop\\WORK\\placements\\python>python demo.py

left is 2
right is 4
For givensum = 33 Subarray is [20, 3, 10]





'''