#include <stdio.h>

//Implementation of stack using array

static int top = -1;

static int max = 6;

int stack[6];



void push(int item)
{

if(top == max - 1){

  printf("Stack Overflow\n");
}
else{
top = top+1;
stack[top] = item;
}

}




void pop(){

int temp;
if(top == -1){

  printf("Stack is Empty\n");
}
else{

 temp = stack[top];
 stack[top] = 0;
top = top-1;

}


}





int main(){

push(10);
push(20);

push(30);
push(40);
push(50);

push(60);

push(70);
pop();


printf("top %d\n",top );


//Display stack
int len = sizeof(stack)/sizeof(int);
printf("Stack is : \n" );
for (int i = 0; i < len; ++i)
{
  printf("%d\t", stack[i]);
}



  return 0;
}
