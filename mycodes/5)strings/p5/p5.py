
# Find all distinct palindromic sub-strings and coreesponding count of a given string

def distinctpallindromes(string,n):
    #step1)create n*n matrix
    matrix = [[0 for x in range(n)] for y in range(n)]
    sequences = []
    
    count = 0
    #step2)fill all diagonal elements by one coz they are also pallindromes
    for i in range(n):
        matrix[i][i]=1
        sequences.append(str(string[i:i+1]))

        count +=1
    #print(sequences)
    #step3)fill all lower diagonal elemnts which are not into consideration by arbitrary values
    for i in range(1,n):
        for j in range(i):
            matrix[i][j]  = -99
    

   
    #step4)fill 1 as per algo
    for i in range(n-2,-1,-1):
        
        for j in range(i+1,n):
            
            if string[i] != string[j]:
                matrix[i][j] = 0
            else:
                if matrix[i+1][j-1] == 1 or matrix[i+1][j-1] == -99:
                    matrix[i][j] = 1
                    sequences.append(str(string[i:j+1]))
                    count+=1

                else:
                    matrix[i][j] = 0
  
    
    #step5)remove repeated pallindrome sequences
    print(sequences)

    distinctstrtolist = list(set(sequences))

    print(distinctstrtolist)
    diff = len(sequences) - len(distinctstrtolist)
    #print("diff is {}".format(diff))
    count = count - diff
    

    print('No. of distinct pallindrome substrings: {}'.format(count))





# Driver code 
if __name__ == "__main__":
    string = "abaaa"
    n = len(string)

    distinctpallindromes(string,n)
    


'''
Dynamic Programming Approach

Time complexity = O(n^2)

Space Compelxity = O(n^2)


https://www.geeksforgeeks.org/find-number-distinct-palindromic-sub-strings-given-string/


https://www.youtube.com/watch?v=BShYX4aq22I

code developed by Viplav Patil


'''