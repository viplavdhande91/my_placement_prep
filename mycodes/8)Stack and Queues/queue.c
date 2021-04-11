#include <stdio.h>
#include <stdlib.h>
//queue implementation using array
static int Queue[4];
static int front = 0;

static int rear = 0;

static int n = 4;

void enqueue(int item){

  if(front == (rear+1)%n){
  
  printf("Queue is full\n");

  }
  else{
   
   rear = rear+1;
   Queue[rear] = item;

  }

}


void deque(){

if(front == rear){


  printf("Queue is empty\n" );
}
else{

 front = front+1;

 Queue[front] = 0;



}





}



int main(){
  
  enqueue(10);
  enqueue(20);
  enqueue(30);

 // enqueue(40); //operation is rejected




   printf("PREVIOUS QUEUE \n");
  for (int i = 0; i < 4; ++i)
  {
    printf("item : %d index : %d\n",Queue[i],i );
  }

  deque();
  
  

  printf("CURRENT QUEUE \n");
  for (int i = 0; i < 4; ++i)
  {
    printf("item : %d index : %d\n",Queue[i],i );
  }




  return 0;
}