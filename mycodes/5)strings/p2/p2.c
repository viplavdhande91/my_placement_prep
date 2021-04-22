
#include<stdio.h>
#include<limits.h>


int main()
{
 
 char string[] = "suunnk";

 static int ascii[256];

 int size = sizeof(string) - 1;

 printf("size is : %d\n",size );



//1)store occurences of each character in hashtable 

 for(int i = 0;i< size;i++)
 {
   
       char val = string[i];


       if(ascii[val] == 0)
       {
        ascii[val] = 1;
       }
       else
       {
        ascii[val] = ascii[val] + 1;

       }



 }


//2) setting '#' as deleting target

for(int i = 0;i<size;i++)  //runs on string : suunnk
{
 
    for (int j = 0; j < 256; ++j)   //runs on ascii table
    {
      
      if(string[i] == j  && ascii[j] > 1) 
      {
          ascii[j] = ascii[j] - 1;

          string[i] = '#';


       
      }   


    }

}


printf("%s\n",string );

//3)final string making in string_new array

 char string_new[size];


int index = 0;

for (int i = 0; i < size; ++i)
{

  if(string[i] != '#')
  {
  string_new[index++] = string[i];
  }


}



printf("Answer : %s",string_new);



  return 0;
}