
#include <stdio.h>
#include<math.h>

void work(long long int n)
{

int arr[n];

long long int sum = 0;
for (int i = 0; i < n; ++i)
{
	scanf("%d",&arr[i]);
    sum+=arr[i];
}


long long int natural_num = n*(n+1)/2;


long long int diff = natural_num - sum;



//printf("natural_num is %d\n",natural_num );
//printf("sum is %d\n",sum );
//printf("diff is %d\n",diff );



if (diff % 2 == 0 || diff <= 0) 
{
	
	printf("Second\n");
}
else
{
	printf("First\n");


}


//printf("sum is %d\n",sum );
/*
for (int i = 0; i < n; ++i)
{
printf("item is %d\n",arr[i] );
}


*/


}





int main(){

int t = 0;
scanf("%d",&t);

long long int n = 0;

while(t){
  scanf("%lld",&n); 
  work(n);

  t--;

    
}

  return 0;
}