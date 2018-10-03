//binary to decimal using stack
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct stack
{
	int binary;
	struct stack *next;
};
typedef struct stack STACK;
STACK *S, *top;
void pop()
{
	/*while(s.top != 0)
	{
		s.top -= 1;
		printf("%d", s.binary[s.top]);
	}
	printf("\n");*/
	/*if(node->next != top)
	{
		printf("%d", node -> binary);
		pop(node -> next);
	}*/
	STACK  *node;
	node =  (STACK*) malloc (sizeof(STACK));
	node = S -> next;
	while(node != NULL)
	{
		printf("%d",  node -> binary);
		node  = node -> next;
	}
	free(S);
}
void push(int num)
{
	/*s.binary[s.top] = num;
	s.top += 1;*/
	STACK *temp;
	temp = (STACK*) malloc (sizeof(STACK));
	temp -> binary = num;
	temp -> next = S -> next;
	S -> next = temp;
}
void decimal_to_binary(int num)
{
	if(num > 0)
	{
		push(num % 2);
		decimal_to_binary(num / 2);
	}
	/*************************************NORMAL  LOOP********************************/
	//int q = num;
	/*while(num > 0)
	{
		push(num % 2);
		num /= 2;//don't have to push the qotient as the modulus is going to be the same if the divisor is >  than the dividend
	}*/
}
int main()
{
	int d;
	
	//top = (STACK*) malloc (sizeof(STACK));
	do
	{
		S = (STACK*) malloc (sizeof(STACK));
		S -> next = NULL;
		printf("Enter the decimal number (0 to quit):  ");
		scanf("%d", &d);
		decimal_to_binary(d);
		//printf("%d",s -> next -> binary);
		pop(S);
		printf("\n");
	}while (d != 0);
	return  0;
}
