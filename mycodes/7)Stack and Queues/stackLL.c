#include <stdio.h>
#include <stdlib.h>
//Implementation of stack using Linked List


struct node{

 int data;

 struct node *link;

}*head;





void push(int item){


struct node *p = (struct node*) malloc(sizeof(struct node));

if(head == NULL){

p->data = item;
p->link = NULL;
head = p; 

}
else{

p->data = item;
p->link = head;
head = p;

}



}


int pop(){

int temp = 0;

if (head == NULL)
{
	printf("Undeflow\n");
	return -1;
}
else{

  struct node *t1;

  t1 = head;

  temp = head->data;

  head = head->link;

  free(t1);
  
  return temp;






  return t1->data; 



}






}


int main(){

 push(10);
 push(20);

 push(30);
 push(40);
 push(50);
 push(60);

 struct node *p1;
 
 p1 = head;

 printf("Stack After Insertions\n");
 while(p1){

 printf("%d\n",p1->data);

 p1 = p1->link;

 }
 
 pop();


 p1 = head;

 printf("Stack After Single pop\n");

 while(p1){

 printf("%d\n",p1->data);

 p1 = p1->link;

 }
 


	return 0;

}