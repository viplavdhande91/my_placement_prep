// Next permutation in C
// https://www.youtube.com/watch?v=zGQq3HGBTXg&ab_channel=AnthonySistilli
#include <stdio.h>


void printarray(int *p){


for (int i = 0; i < 7; ++i)
{

printf("%d\t",*(p+i));

}




}



int main(){
  
  int arr[7] = {9,1,2,4,3,1,0};

  int size = sizeof(arr)/sizeof(int);

  int inverse_point_index = 0;

  int loopvar = size-1;
  
  int i = size-2;

  int j = size-1;

  int item1;
  int item2;
 //step1)finding inversion point 
  while(loopvar)
  {
        
        item1 = arr[i];

        item2 = arr[j];


        if (item1 < item2)
        {
          inverse_point_index = i;
          break;
        }


          i--;
          j--;
          loopvar--;
  }
 
 printf("inversion_point : %d\n",arr[inverse_point_index] );


//step2)swapping (swap with the greatest number than Inversion point while traversing from last to forward)
  int largerindex = 0;
  int inversion_point = arr[inverse_point_index];
  
  i = size-1;
while(i > inverse_point_index)
  {
    if(arr[i] > inversion_point){

       largerindex = i;
       break;

    }


  i--;
  
  }
 printf("largerindex : %d\n",largerindex);

  //pure swap

  int greater_num_from_end = arr[largerindex];


  int temp = inversion_point;

  arr[inverse_point_index] = arr[largerindex];

  arr[largerindex] = inversion_point;
 

 //step3)reverse the array part after inverse point

  i = inverse_point_index+1;
  j = size-1;

  while(i<j){
   
   temp = arr[i];

   arr[i] = arr[j];

   arr[j] = temp;



  i++;
  j--;

  }


printarray(arr);




  return 0;
}