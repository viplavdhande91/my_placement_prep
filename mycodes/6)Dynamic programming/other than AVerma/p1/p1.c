// C program to find longest pallindromic substring
// https://www.youtube.com/watch?v=UflHuQj6MVA&ab_channel=TECHDOSE
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

void our_func(char *p,int len)
{
len = len-1;

 int dp_array[len][len];


//step1) Initialisation
for  (int i = 0; i < len; ++i)
{
            
           for (int j = 0; j < len; ++j)
           {

            dp_array[i][j] = -1;


           }


}

//step2) values fill up  for len =1, len=2 substrings

for  (int i = 0; i < len; ++i)
{
   
        for (int j = 0; j < len; ++j)
        {

         if (i == j){

         dp_array[i][j] = 1;

       
         }
          

        if ( i < j && abs(j-i) == 1 )
        {

             //printf("i : %d j : %d\n",i,j);

         if (*(p+i) == *(p+j))
         {
           //  printf("i : %d j : %d\n",i,j);

            dp_array[i][j] = 1;
         }
         else
         {

            dp_array[i][j]= 0;


         }



        }


        }


} 



printf("phase 1 \n");
for  (int i = 0; i < len; ++i)
{
   
        for (int j = 0; j < len; ++j)
        {

      
        printf("%d\t",dp_array[i][j]);


        }

    printf("\n");

} 






//step3) filling values fro others as well




int k = INT_MIN;  //to get max value

int i_cache = 0;
int j_cache = 0;

for  (int j = 0; j < len; ++j)    //CMO enforce
{
   
        for (int i = 0; i < len; ++i)
        {

      
          
        if (j>i && abs(i-j)>1)
        {


               if (*(p+i) == *(p+j) && dp_array[i+1][j-1] == 1)
               {
                  

                  if (k < abs(i-j))
                  {
                     k = abs(i-j)+1;

                     i_cache = i;

                     j_cache = j;
                  }

                //  printf("j: %d ,  i :%d\n",j,i);

         
                  dp_array[i][j] = 1;



               }
               else
               {

                  dp_array[i][j]= 0;


               }



       }
        
           
        


        }


} 




printf("phase 2 \n");
for  (int i = 0; i < len; ++i)
{
   
        for (int j = 0; j < len; ++j)
        {

      
        printf("%d\t",dp_array[i][j]);


        }

    printf("\n");

}



printf("i_cache: %d ,  j_cache :%d\n",i_cache,j_cache);



//result display

printf("result is:\n");
for (int i = i_cache; i <= j_cache; ++i)
{


printf("%c",*(p+i) );


}




}





int main(){

char s[] = "aaaabbaa";

printf("String is : %s\n",s );
int len = sizeof(s)/sizeof(char);

//printf("%d\n",len);
our_func(s,len);









   return 0;
}