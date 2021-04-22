#Run Length Encoding by Viplav Patil
 
def string_encoding(string):
  n = len(string)
 
#s1) find out character list
  characters_list = list(string)
  
  templist = []
  for x in range(len(characters_list)):
    if characters_list[x] not in templist:
      templist.append(characters_list[x])
   
  characters_list = templist.copy()
 #print(characters_list)

#s2) find out occurences
  
  occurence = []
    
  count = 0

  for x in range(len(characters_list)):
    temp = characters_list[x]
    
    for y in range(len(string)):
      if string[y] == temp:
        count+=1

    occurence.append(count)
    count = 0

  #print(occurence)

#s3)convert occurence list fron int ot str
 
  for k in range(len(occurence)):
    occurence[k] = str(occurence[k])
 
  #print(occurence)
#s4)join character_list and occurence list

  for k in range(len(characters_list)):
    characters_list[k] = characters_list[k] + occurence[k]
     
#s5)convert into string
   
  str1 = ''
  for x in range(len(characters_list)):
    str1 += characters_list[x]

  
  print("Final Encoded Output is {}".format(str1))


if __name__ == '__main__':
  string = "wwwwaaadexxxxxx"
  string_encoding(string)




  '''
T.C = O(n)
S.C = O(n)



  '''