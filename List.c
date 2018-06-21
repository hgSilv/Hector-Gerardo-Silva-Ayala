/*
 ============================================================================
 Name        : List.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "List.h"

struct strNode
{
	Type data;
	struct strNode *prior, *next;
};

typedef struct strNode* Node;

struct strList{
	Node first, last;
	int size;
};

List create()
{
	List new = (List)malloc(sizeof(struct strList));
	if(new == NULL)
		return 0;
	new->first = NULL;
	new->last = NULL;
	new->size = 0;
	return new;
}

void destroy(List who)
{
	free(who);
}

int size(List who)
{
	int size = who->size;
	return size;
}


void add(List who, Type data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->prior = NULL;
	newNode->next = 
}
