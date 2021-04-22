#include<stdio.h>
#include<stdlib.h>

//Validate an IP Address 


int main()
{
//step1)input

char ip[] = "222.87.111.111";

int size = sizeof(ip)/sizeof(char);

printf("size : %d \n",size);


int k = 0;

int item = 0; 

//step2)after typecasting it return value of arr[i]
char chr = '0';   //Ascii value of 0 = 48

int i = 0;

int loopcount = 4;

int mycheck = 1;

while(loopcount){

        while(ip[i] != '.')
        { 

                if (i == size-1)
                {
                  break;
                }


                item = (int) ip[i];

                item = item - chr;
                
               // printf("item : %d \n",item);
                
                k = k * 10 +item;
                
                i++;

      }

//validation of number
      if (k >= 0 && k <= 255)
      {

      }
      else{
       
       mycheck = 0;
      }


  
        
        i++; //increment when . encouters

        printf("k %d\n",k);
        k=0;


 loopcount--;

}

//output


if (mycheck)
{
printf("Valid IP\n");
}
else{
  
printf("No Valid IP\n");

}





return 0;
}