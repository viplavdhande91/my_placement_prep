
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
Find position of set bit 


e.g 8 == 1000 == 2^3 == 3+1 is first set bit position




*/



int position(int n)
{

int count = 0;

int exp = 0;

int res= 0;

		while(1)
		{


			res = pow(2,exp);

			if (res == n)
			{
			  
			  return exp+1;

			}

			exp++;

		}


 


}










int power(int n)
{

int exp = 0;
int exp_cache = 0;
int value = 1;

while(1)
{        
       //make binary number from 2^0,2^1......
		  while(exp_cache)
		  {
		 
		   value = value * 2  ;

		  	exp_cache--;
		  }
		   printf("value is :%d\n",value);


		//IF matches   
	   if(value == n)
	   {
	   	return position(n);
	   }
       //if not equal and n is still lesser
	   else if(value < n)
	   {
	    
	    exp = exp+1;
	    exp_cache = exp;
	    value = 1;

	 
	   }

	   //if no equal and n is greater than binary number  
	   else if(value > n)
	   {

	   	return -1;
	   }




}



}



int main(){


int n = 16;

int res = power(n);




printf("NUM : %d,Set bit position : %d\n",n,res );



return 0;


}