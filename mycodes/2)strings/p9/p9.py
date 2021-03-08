
#Find the first non-repeating character from a stream of characters


NO_OF_CHARS = 256

def reapeated_first_char(string):
  count_array = [0 for x in range(NO_OF_CHARS)]
 
  
  count = 1
  for x in range(len(string)):  #FILL UP ARRAY
    one_character  = string[x]
    count_array[ord(one_character)] += count


  for x in range(len(string)):
    one_character = string[x]
    
    if count_array[ord(one_character)] == 1:
      print(one_character)
      return
    else:
      pass 
  







if __name__ == '__main__':
  string = 'VIPLAV'

  reapeated_first_char(string)



'''
T.C = O(n)

S.C = O(1)

input = 'viplav'
output = 'i'



'''