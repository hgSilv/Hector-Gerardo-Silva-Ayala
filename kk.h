/*
 * kk.h
 *
 *  Created on: 06/06/2018
 *      Author: Dioswe
 */

#ifndef KK_H_
#define KK_H_

//Codigo

typedef struct sequence * Sequence;

Sequence seq_create(int init);

void seq_destroy(Sequence);

Sequence seq_create_step(int init, step);

int seq_next(Sequence);

#endif /* KK_H_ */
