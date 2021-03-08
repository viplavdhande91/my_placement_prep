// implementing strStr for pattern searching
#include <stdio.h>





int main()
{

char arr[] = "viplav";

char pattern[] = "pla";






int size_arr_len = sizeof(arr)/sizeof(char); //last null character's size gets added
size_arr_len--; 


int pattern_arr_len = sizeof(pattern)/sizeof(char);
pattern_arr_len--;

//negative case
if (pattern_arr_len == 0)
  return -1;



int count = size_arr_len - pattern_arr_len + 1;


int j = 0;
int j_cache;

for (int i = 0; i < count; ++i)
{
  
  j_cache =j;

  int k = 0;
  
  int res = 1;

  int innerloop = pattern_arr_len;


  while(innerloop)
  {
    
    if (arr[j] == pattern[k])
    {
      
      j++;
      k++;

    }
    else{
      res = 0;
      break;



    }

    innerloop--;


  }
   j = j_cache + 1;

  if (res == 1)
  {
    printf("milgya bhai index hai %d \n",i);
    break;
  }


printf("%d\n",res);



}



return 0;
}