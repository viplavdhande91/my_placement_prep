    
# Python program to check if strings are rotations of each other or not 

def areRotations(string1, string2): 
    size1 = len(string1) 
    size2 = len(string2) 
    concatenated_string = '' 


#check1
    # Check if sizes of two strings are same 
    if size1 != size2: 
        return 0
#check2

    concatenated_string = string1 + string1     #concatenate
#count ==>Returns the number of times a specified value occurs in a string
    
    if string2 in concatenated_string:
        return 1
    else:
        return 0 
# Driver program to test the above function 
string1 = "AAKD"
string2 = "KDAA"

if areRotations(string1, string2): 
    print("Strings are rotations of each other")
else: 
    print("Strings are not rotations of each other")





'''
https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/

line 21 matches pattern into concatenated string
it takes O(n) according to KMP algo of pattern matching

Note:string2 is a pattern which we try to find in concatenated_string



TimeComplexity  ===>O(n)

Space Complexity =O(n)

'''