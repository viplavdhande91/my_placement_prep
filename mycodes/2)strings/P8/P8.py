
#Check whether two strings are anagram of each other By Viplav Patil


NO_OF_CHARS = 256


def are_anagrams(string1,string2):
  count_array = [0 for x in range(NO_OF_CHARS)]
  
  if len(string1) != len(string2): #RULE OUT CHECK CASE
    return 0
  
#IF BOTH STRING HAVE EQUAL LENGTHS
  for x in range(len(string1)):   #FILL UP 1 AT PLACES OF ASCII VALUES
    temp = string1[x]
    count_array[ord(temp)] = 1


  for x in range(len(string2)): #CHECK VALUES AND COMAPARE
    temp = string2[x]
    
    if count_array[ord(temp)] == 1:
      pass
    else:
      return 0 
  

  return 1 






if __name__ == '__main__':
  string1 = 'TRIANGLE'
  string2 = 'INTEGRAL'

  capture =  are_anagrams(string1,string2)

  if capture: 
    print("The two strings are anagram of each other")
  else: 
    print("The two strings are not anagram of each other")





'''
T.C =O(N)

S.C = O(1)


'''