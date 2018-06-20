/*
 * Queue.h
 *
 *  Created on: 20/06/2018
 *      Author: is712655
 */

#ifndef QUEUE_H_
#define QUEUE_H_

typedef enum {false, true} bool;

typedef void * Type; 

typedef struct strQueue *Queue;

Queue queueCreate();

int size(Queue);

bool isEmpty(Queue);

Type peek(Queue);

void offer(Queue, Type);

Type poll(Queue);

void destroy(Queue);

#endif /* QUEUE_H_ */
