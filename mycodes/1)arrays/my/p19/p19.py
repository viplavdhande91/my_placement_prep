#Sum of bit differences among all pairs


arrbin = []
def sumofbinarydiffrence(arr,n):
#conversion of array to 16-bit binary number    
    for x in range(len(arr)):
        
        num = "{:016b}".format(arr[x])

        arrbin.append(num)

    print(arrbin)

    sumvar  = 0

#comparing every number with another number
    for i in range(n):
        num1 = arrbin[i]
        for j in range(n):
            num2 = arrbin[j]
            
            loopcount = 15
            while loopcount != -1 :
                if num1[loopcount] != num2[loopcount]:
                    sumvar+=1

                loopcount-=1



                
        


    print(sumvar)







if __name__ == '__main__':
    arr = [1,2]
    sumofbinarydiffrence(arr,len(arr))






'''

T.C = O(n-square)

S.C = O(n)

'''