/*
 * set.c
 *
 *  Created on: 04/07/2018
 *      Author: is712655
 */


#include <stdio.h>
#include <stdlib.h>
#include "Set.h"

struct strNode{
	Type data;
	struct strNode *left, *right;
};

typedef struct strNode Node;

struct strSet{
	Node *root;
	int size;
	Comparator cmpFunction;
	Clone cloneFunction;
	MyFree freeFunction;
};

Set set_create(Comparator cmp, Clone clone, MyFree myFree)
{
	Set newSet=(Set)malloc(sizeof(struct strSet));
	if(newSet!=NULL)
	{
		newSet->root=NULL;
		newSet->size=0;
		newSet->cmpFunction=cmp;
		newSet->cloneFunction=clone;
		newSet->freeFunction=myFree;
	}
	return newSet;
}

int set_size(Set who)
{
	if(who!=NULL)
		return who->size;
	return -1;
}

Node* newNode(Type data)
{
	Node *new=(Node*)malloc(sizeof(Node));
	if(new!=NULL)
	{
		new->data=data;
		new->left=NULL;
		new->right=NULL;
	}
	return new;
}

boolean set_add(Set who, Type data)
{
	//Node *new=newnode(data);
	Node *new=newNode(who->cloneFunction(data));
	boolean found=false, added=false;
	int status;
	if(who->root=NULL)
	{
		who->root=new;
		who->size++;
	}
	else
	{
		Node *current;
		current=who->root;
		while((!found)&&(!added))
		{
			status= who->cmpFunction(new->data, current->data);
			if(status==0)
				return false;
			else
			{
				if(status<0)
				{
					if(current->left == NULL)
					{
						current->left=new;
						who->size++;
						added = true;
					}
				else
					current=current->left;
			}
			else
			{
				if(current->right == NULL)
				{
					current->right=new;
					who->size++;
					added = true;
				}
					else
						current=current->right;
				}

			}
		}
	}
}
