# reverse a string
no_of_chars = 256

 
def reverse(string):
    left = 0 
    right = len(string) - 1

    string = list(string)


    while left < right:
#swap
        temp = string[left]
        string[left] = string[right]
        string[right] = temp

        left+=1
        right-=1
   
    temp1 = ''
    for x in range(len(string)):
        temp1 +=  string[x]

    print(temp1)


    
 

# Driver code 
if __name__ == "__main__": 

    string = "nivrutti"

    reverse(string)
    


'''
Sudiptos approach


Time complexity = O(n)

Space Compelxity = O(n)




one line code  ==> string[::-1]


'''