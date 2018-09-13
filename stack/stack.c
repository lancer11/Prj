#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 8
int stack[MAX_SIZE];

int top = -1;

int isempty(void);
int isfull(void);
int peek(void);
int pop(void);
int push(int);

int isempty(void)
{
	if (top == -1)
		return true;
	else
		return false;
}

int isfull(void)
{
	if (top == (MAX_SIZE -1))
		return true;
	else
		return false;
}

int peek(void)
{
	return stack[top];
}

int pop(void)
{


	int val = stack[top];

	top--;

	return val;
}

int push (int val)
{
	top++;
	stack[top] = val;

	return true;
}

int main() {
   // push items on to the stack
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);

   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");

   return 0;
}
