// Quick sort in C

#include <stdio.h>

// Function to swap position of elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}



// Function to partition the array on the basis of pivot element


int partition(int array[], int p, int r) {
  
  // Select the pivot element
  int pivot = array[r];
  
  int i = (p - 1);

  // Put the elements smaller than pivot on the left 
  // and greater than pivot on the right of pivot
  for (int j = p; j < r; j++) // p to r-1

  {
    
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }

  swap(&array[i + 1], &array[r]);

  return (i + 1);
}

void quickSort(int array[], int p, int r) {
  if (p < r) {
    
    // Select pivot position and put all the elements smaller 
    // than pivot on left and greater than pivot on right
    int q = partition(array, p, r);
    
    // Sort the elements on the left of pivot
    quickSort(array, p, q - 1);
    
    // Sort the elements on the right of pivot
    quickSort(array, q + 1, r);
  }
}




// Function to print eklements of an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}



// Driver code
int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  quickSort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  
  printArray(data, n);
}