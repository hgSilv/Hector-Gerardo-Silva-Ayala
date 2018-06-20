
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

struct strNode {
	Type data;
	struct strNode *next;
};

typedef struct strNode *Node;

struct strQueue{
	struct strNode *first:
	struct strNode *last;
	int size;
};

void offer(Queue who, Type data)
{
	Node new = (Node*)malloc(sizeof(Node));
	new->data=data;
	new->next=NULL;
	if(isEmpty())
	{
		who->first=new;
		whot->last=new;
	}
	else
	{
		who->last->next = new;
		who->last=new;
	}
		who->size++;
}
