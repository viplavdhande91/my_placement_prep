
 #Find K largest (or smallest) elements in array.

def heapify(array, size,  i):
    largest = i;    # Initialize current node as largest
    left = 2 * i + 1;   # position of left child in array = 2*i + 1
    right = 2 * i + 2;   # position of right child in array = 2*i + 2

    if (left < size and array[left] > array[largest]):
        largest = left;

      # If left child is larger than root

    if (right < size and array[right] > array[largest]): # If right child is larger than largest so far
        largest = right;

    if (largest != i):         # If largest is not root swap it
        swap = array[i];
        array[i] = array[largest];
        array[largest] = swap;

        heapify(array, size, largest); # Recursively heapify the sub-tree
    
    
def buildHeap( arr, n):

    l_Nonleaf_index = (n / 2) - 1; # Index of last non-leaf node
    l_Nonleaf_index =int(l_Nonleaf_index)
    for i in range(l_Nonleaf_index,-1,-1):
        heapify(arr, n, i);
        
    

def  printHeap( arr,  n, k):
    print("Array representation of Heap:");
    print(arr);
    
    print("First k ={} elements from list is ".format(k))
   
    for i in range(k):
        max = arr[0];
        print(max);
        print("\t")

        arr.pop(0)

        heapify(arr, len(arr), i); # Recursively heapify the sub-tree
   
    

if __name__ == '__main__':    
    arr= [8, 5 ,4 ,1 ,56, 18 ,41,42 ];
    n = len(arr);
    k = 4;
    buildHeap(arr, n); 
    printHeap(arr, n,k);
    


'''

Time Complexity:
1)Builheap ==>O(n) ,Max heapify==O(logn)  ====>Overall T.C = O(n);


2)displaying k elements ===>klogn() {due to maxheapify}       #but k<<<n


NOte:
Time complexity: O(n + klogn)  ;#goood for  k<<<n

for k==n ==>T.C =O(nlogn) which is equal to coventional sorting method







https://www.geeksforgeeks.org/k-largestor-smallest-elements-in-an-array/




Method 4 (Use Max Heap)
1) Build a Max Heap tree in O(n)
2) Use Extract Max k times to get k maximum elements from the Max Heap O(klogn)



Time complexity: O(n + klogn)

'''