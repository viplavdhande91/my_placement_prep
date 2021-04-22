#include<stdio.h>
#include<stdlib.h>

//find primes in range(Inclusive)

int main()
{

int M = 1;
int N = 20;


int factors = 0;


int num;


printf("Prime numbers are \n");
for (int i = 2; i <= N; ++i)
{
  num = i;

  for (int j = 1; j <= N; ++j)
  {
    if (num%j == 0)
    {
      
      factors++;
    }

   

  }


  if (factors == 2)
  {
    printf("%d\t", num);
  }

  factors = 0;

}




return 0;
}