//evaluation of postfix expression
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
float  stk[MAX];
int top=-1;
void push(float stk[],float val );
float pop(float stk[]);
float calpostfix(char exp[]);
int main()
{
	char  exp[100];
	float val;
	printf("enter the postfix expression to be evaluated\n");
	gets(exp);
	val=calpostfix(exp);
	printf("calculated value is %.2f",val);
	return 0;
	
	
}
void push(float stk[],float val)
{
	if(top==MAX-1)
	printf("overflow\n");
	else
	{
		top++;
		stk[top]=val;
	}
}
float pop(float stk[])
{
	float val=-1;
	if(top==-1)
	printf("underflow\n");
	else 
	{
		val=stk[top];
		top--;
	}
	return val;
}
float calpostfix(char exp[])
{
	float op1,op2,res;
	int i=0;
	while(exp[i]!='\0')
	{
		if(isdigit(exp[i]))
		push(stk,(exp[i]));
		else
		{
			op1=pop(stk);
			op2=pop(stk);
			switch(exp[i])
			{
				case '+':
					res=op2+op1;
					break;
					case '-':
						res=op2-op1;
						break;
						case '*':
							res=op2*op1;
							break;
							case '/':
								res=op2/op1;
								break;
								case '%':
									res=(int) op2 % (int )op1;
									break;
			
			}
			push(stk,res);
		}
		i++;
	}
return (pop(stk));
						
					
					
			}
			
			
	