# python Given a text and a pattern, find all occurrences of pattern in a given text Using Rabin-Karp algorithm.
no_of_chars = 10

def hashfunction(temp_pattern,pattern_len):
    hashvalue = 0

    for x in range(pattern_len-1,-1,-1):
        hashvalue  += pow(no_of_chars, x) * ord(temp_pattern[x])

    #hashvalue = hashvalue%13
    #print("hashvalue inside func {}".format(hashvalue))
    return hashvalue





def match(string1,pattern1,index):
    #print("string1 is {}".format(string1))
    #print("pattern1 is {}".format(pattern1))
    #print("index is {}".format(index))

    innerloopvar = len(pattern1)
    resultcount = 0
    j = 0
    while innerloopvar:
        
        if(string1[index] == pattern1[j]):
            resultcount+=1
            index+=1
            j+=1
        
        innerloopvar-=1
          
    if resultcount ==len(pattern1):
        return 1
        
    else:
        return 0




def rabin_karp(string_arr,pattern,pattern_len):
    i  = 0
    j  = pattern_len-1

    hashvalue_of_pattern= hashfunction(pattern,pattern_len)
    #print(hashvalue_of_pattern)

    loopvar = (len(string_arr)-pattern_len)+1
    
    result = 0

    while(loopvar):
        
        hashvalue_temp = hashfunction(string_arr[i:j+1],pattern_len)
   
        if(hashvalue_of_pattern == hashvalue_temp):
           # print(i)
           # print(j)
            capt = match(string_arr,pattern,i)

            if capt == 1:
                print("Patten exists/matches in String and index {}".format(i))

            result = capt

            if capt == 0:
                continue

        else:
            i+=1
            j+=1
        
        loopvar-=1

    return result


     
    


if __name__ == '__main__':
    string_arr = 'viplav'
    pattern = 'lav'

    pattern_len = len(pattern)

    capture = rabin_karp(string_arr,pattern,pattern_len)

    if(capture == 0):
        print("Pattern Doesnt not matched")
    



'''

Time Complexity = O(n-m+1) =O(n)
where n=length of string,m = length of pattern



Note:Worst T.C goes to O(m*n) due to spurious hits

spurious hit ==It occurs when our hash functions fails.i.e we get matching hashvalue but still pattern doesnt matches


https://www.youtube.com/watch?v=qQ8vS2btsxI

#contributed by viplav patil


'''