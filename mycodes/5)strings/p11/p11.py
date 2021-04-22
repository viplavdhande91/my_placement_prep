#Minimum number of palindromic subsequences to be removed to empty a binary string

def min_seq_to_be_removed(string):

# part1 :checks whether string is pallindrome or not
  i = 0
  j = len(string) - 1
  loopvar = len(string)
  pallindrome_count = 1
  whether_pallindrome =False


  while i < j:
    if string[i] == string[j]:
      
      whether_pallindrome =True
    else:
      whether_pallindrome =False
      break

    i+=1
    j-=1
  





# part2 :if yes print pallindrome count ....if no make forcefully sequence to pallindrome 


  if whether_pallindrome:  #only 1 removal the given input itself
    print("Number of minimal pallindromic sequences to be removed {} for sake emptying string".format(pallindrome_count))
  else:
    i = 0
    j = len(string)-1

    mystr = list(string)

  while i < j:
    if mystr[i] == mystr[j]:
      pass
       
    else:
      mystr[i] = '#'
      mystr[j] = '#'
      pallindrome_count += pallindrome_count

    print("mystr {}".format(mystr))

    i+=1
    j-=1

  if not whether_pallindrome :
    print("Number of minimal pallindromic sequences to be removed {} for sake emptying string".format(pallindrome_count))







if __name__ == '__main__':
  string = '10001001'
  min_seq_to_be_removed(string)



  '''

Expected time complexity : O(n)



  '''