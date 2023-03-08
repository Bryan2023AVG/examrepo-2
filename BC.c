//my .c file

#include <stdio.h>
#include "BC.h"

void push(char val) //int val in bracket bcuz its passing val or applied_resultfrom c file to function
{
   	
	//1 incrementing top
	top++;
	//2 storing val at arr with top
	arr[top] = val; // storing in stack opernd or applied_result
}


char pop()
{
	char val; //to retrieve operand
	
	//1 store top at val
	val = arr[top];
	//2 decrementing top
	top--;
	
	//3 return val
	return val;
}

char peek()
{
	return arr[top]; // returning final result to display
}




