
 #Find median of sorted array using heaps


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
    
    
    median_index  = int((n/2))
    median_element = None;

    for i in range(n):
        if i == median_index:
            median_element = arr[0]
        else:             
            arr.pop(0)
            heapify(arr, len(arr), i); # Recursively heapify the sub-tree

    print("Median is: {} ".format(median_element))



    

if __name__ == '__main__':    
    arr= [11,12,19,27,34,55,63,78,95 ];
    n = len(arr);
    k = 4;
    buildHeap(arr, n); 
    printHeap(arr, n,k);
    


'''

Time Complexity:
1)Builheap ==>O(n) ,Max heapify==O(logn)  
====>Overall T.C = O(n);



'''