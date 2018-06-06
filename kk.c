/*
 * kk.c
 *
 *  Created on: 06/06/2018
 *      Author: Dioswe
 */


#include <stdio.h>
#include <stdlib.h>
#include "kk.h"


struct sequence{
	int next;
	int step;
};

Sequence seq_create(int init)
{
	Sequence new;
	new=seq_create_step(init, 1);
	return new;
}

Sequence seq_create_step(int init, int step)
{
	Sequence new;
	new=(Sequence)malloc(sizeof(struct sequence));
	new ->step=step;
	return new;
}

void seq_destroy(Sequence who)
{
	free(who);
}

int seq_next(Sequence who)
{
	who->next=who->next+who->next;
}
