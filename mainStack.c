/*
 * main.c
 *
 *  Created on: 19/06/2018
 *      Author: is712655
 */


#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main(void)
{
	int x;
	int *p;
	Stack stack = createStack();
	for(int i=0; i<10; i++)
	{
		scanf("%d", &x);
		push(stack, &x);
	}
	for(int i=0; i<10; i++)
	{
		p=pop(stack);
		printf("%d", *p);
	}
	
	
	Stack s2;
	s2=createStack();
	char t1[]="HOLA";
	char t2[]="ITESO";
	push(s2, t1);
	push(s2, t2);
	char *rt = pop(s2);
	printf("\n%s", rt);
	
	return EXIT_SUCCESS;
	
	
}
