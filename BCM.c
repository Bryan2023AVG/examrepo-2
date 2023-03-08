//my .c executable file
#include <stdio.h>
#include "BC.h"
void match();
void match()
{
	char exp[10]; //char array to store full expression
	int index=0; //declaring index to store one by one element in exp array
    char pop_result;
    int flag=0; //two braket checking
	printf("Enter full expression\n");//taking expression
	scanf("%s",&exp);
	printf("Your expression:%s\n",exp); //showing user it's expression 
	
	while(exp[index]!='\0') //!='\0' means stopping at last entered char
	{
		char val; 
		val = exp[index];
		if(val=='('||val=='['||val=='{')//checking if it's operator
		{
			push(val); //pushing above val(int) to store in stack
		}
		else if(val==')'||val==']'||val=='}')
		{
			pop_result = pop();
			if(top==-1)
			{
				printf(" its not matching fully\n");
				return ;
			}
			else if((pop_result=='(')&&(exp[index]==')'))
			{
				index++;
				continue;
			}
			else if((pop_result=='[')&&(exp[index]==']'))
			{
				index++;
				continue;
			}
			else if((pop_result=='{')&&(exp[index]=='}'))
			{
				index++;
				continue;
			}
			else 
			{
				flag++; //for 2  any brackets 
				break;
			}
		}
		index++; //incrementing index to store next char in exp[index]
	}
    if(top==0&&flag==0)
	{
		printf("Its matching fully\n");
	}
	else
	{
		printf("Its not matching\n");
	}
}




int main()
{
	top == -1;  //declaring top as -1
	
	match(); //calling evaluate function
}
