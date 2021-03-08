#Scrambled String with NO DP

t = dict()

def isScramble(S1,S2):

#base condition
  if len(S1) != len(S2):
    return False

  if len(S1) == 0 and len(S2) == 0:
    return True
 # Equal strings are scramble strings 
  if S1 == S2:
    return True


  mycheckcount = 0;

  for x in range(len(S1)):
    char = S1[x]

    for y in range(len(S2)):

      if S2[y] == char:
        mycheckcount+=1


    if mycheckcount != 1:
      return False

    mycheckcount = 0;


  return True

  



if __name__ == "__main__":       
    S1 = "coder"
    S2 = "ocred"
    
    if (isScramble(S1, S2)): 
        print("Yes") 
    else: 
        print("No")

    print(t)