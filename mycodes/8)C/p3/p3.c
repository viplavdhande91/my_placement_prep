#include <stdio.h>

//ones and twos complement find in C

void onescomp(char *p)
{

int i = 0;

    while(*(p+i))
		{
		   

		  if(*(p+i) == '0'){
		   
		   *(p+i) = '1';

		  }
		  else{

		   *(p+i) = '0';

		  }


			i++;
		}

}



//reverse check the array 
void twoscomp(char *p)
{

int size = sizeof(p);

printf("size is %d\n",size );

int mycheck = 1;


printf("iterated number in reverse order is : \n");



for(int i=size-1;i >= 0;i--)	
 {
 		
     printf("%c",*(p+i));

 		if(*(p+i) == '0' && mycheck == 1){

		   *(p+i) = '0';
		   continue;

		}
		else if(*(p+i) =='1' && mycheck ==1){


		  *(p+i) = '1';
		  mycheck = 0;
		  continue;

		} 

		if (mycheck == 0)   //reverse all the numbers after 1st "1" occurence
		{
			
		  if(*(p+i) == '0'){

		  	*(p+i) = '1';
		  }
		  else{

		  	*(p+i) ='0';
		  }




		}



  }



}









int main()
{

char b[] = "01001010";

//onescomp(b);
twoscomp(b);

printf("\n2's Complement  is : \n");
printf("%s\n",b );



}



