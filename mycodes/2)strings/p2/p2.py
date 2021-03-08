# Python program to remvoe duplicate characters from an input string 
NO_OF_CHARS = 256


def removeDups(string): 
    bin_hash = [0] * NO_OF_CHARS

    strtolist = list(string)
    
    print("Orignal String to lists")
    print(strtolist)
    print('\n')

    for x in range(len(strtolist)):
        temp = strtolist[x];

        if bin_hash[ord(temp)] == 0:
            bin_hash[ord(temp)] = 1
        else:
            strtolist[x] = "#"

    print("Inserted # at the place of repeated values")
    print(strtolist)
    print("\n")


    str1 = ''

    for x in range(len(strtolist)):
        if strtolist[x] != '#':
            str1 += strtolist[x]


    print("String after removing duplicates:")
   
    print(str1)




# Driver program to test the above functions 
string = "suunnk"
removeDups(string)


'''

Time Complexity: O(n) + O(n) === O(n)

Space Complexity: O(1)

METHOD 4 (Use Hashing )

https://www.geeksforgeeks.org/remove-duplicates-from-a-given-string/

'''