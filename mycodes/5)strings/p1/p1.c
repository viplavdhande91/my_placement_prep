
#include<stdio.h>
#include<limits.h>


int main()
{
 
 char string[] = "test";

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

//printf(" asc %d\n",'t' );

//2)find maximum value from ascii table
int k = INT_MIN;

for (int i = 0; i < 256; ++i)
{
   
   if(k < ascii[i])
   {

    k = ascii[i];

   }


}


printf("maxvalue in ascii : %d\n",k );


//3)find the index aka ascii value of char
for (int i = 0; i < 256; ++i)
{
  if(ascii[i] == k)
  {
    printf("char  : %c\n",i);
    break;
  }
}


  return 0;
}



//T.C = O(n)