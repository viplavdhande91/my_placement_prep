#Reverse a string without affecting special characters


def work(string):
  strlist = list(string)

  charlist = []
#1) Create a temporary character array say alphnumeric[].

  alphnumeric = [0,1,2,3,4,5,6,7,8,9,'a','b','c','d','e','f','g','h','f','i','j',
  'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
#2) Copy alphabetic characters from given array to charlist[].

  for x in range(len(strlist)):
    if strlist[x] in alphnumeric:
      charlist.append(strlist[x])


  #3)reverse array
  left = 0
  right =len(charlist) - 1
 
  while left < right:
    temp = charlist[right]
    charlist[right] = charlist[left]
    charlist[left] =temp

    left+=1
    right-=1

  
#4)Now traverse input string and temp in a single loop. Wherever there is alphabetic 
#character is input string, replace it with current character of charlist[].  

  length = len(charlist)-1
  index = 0

  for x in range(len(strlist)):
    if (strlist[x] in alphnumeric) and index <= length:
      strlist[x] = charlist[index]
      index+=1

  print(strlist)
    





if __name__ == '__main__':
  string = "a,b$c"
  work(string)





'''
t c = O(n)
S.c = O(n)

'''