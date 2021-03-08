# Python program to return the maximum occurring character in the input string 


ASCII_SIZE = 256


def getMaxOccuringChar(str): 
	count = [0] * ASCII_SIZE 

	#step1)counts occurence of each character is string and storing at its corresponding ascii value index
	for i in str: 
		count[ord(i)]+=1; 

	print(count)
#step2) setting up max and extracting character
	
	max1 = max(count)
	maxindex = count.index(max1)


	return chr(maxindex)
    



if __name__ == '__main__':
	str = "akssj"
	print("Max occurring character is " + getMaxOccuringChar(str)) 



'''
Time Complexity: O(n)
Space Complexity: O(1) — Because we are using fixed space (Hash array) irrespective of input string size.


Note : ord('a') returns 97 which ascii value of 'a'

chr(97) = a
'''