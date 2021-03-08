
#Recursively remove all adjacent duplicates

def adjacent_remover(string):
    n = len(string)
    
    indexcapture = []
#s1)first capture all adjacent indexes in indexcapture list      
    for i in range(n-1):
        if string[i] == string[i+1]:
            indexcapture.append(i)
            indexcapture.append(i+1)
    
    #print(indexcapture)
    
    if len(indexcapture) == 0:  #base condition for recursion

        if len(string) == 0:
            print("Empty String")
        else:
            print("string is: {}".format(string))

        return
            
#s2)first insert # at all adjacent indexes  in string List      
    for x in range(len(indexcapture)):
        index = indexcapture[x]
        string[index] = '#'

    

    #print(string)


   
#s3)extract all characters other than # into another list string

    
    count1 = len(list(set(indexcapture)))   

    for _ in range(count1):
        string.remove('#')

#s3)recursive call


    
    return adjacent_remover(string)
    

        
        
if __name__ == '__main__':
    string = 'acaaabbbacdddd'
    string = list(string)

    adjacent_remover(string)


'''
T.C = O(n) 
we dont know how many times adjacent_remover goin to get called
it depends on duplicates remian in string..henceforth we cannot write
recuurence relation for it


for each call it
is taking O(n).


S.C = O(n)

'''