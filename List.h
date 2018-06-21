/*
 * List.h
 *
 *  Created on: 21/06/2018
 *      Author: is712655
 */

#ifndef LIST_H_
#define LIST_H_

typedef enum {false, true} bool;

typedef struct strList* List;

typedef void * Type;

List crate();

void destroy(List);

int size(List);

void add(List, Type);

//Siguientes necesitan puntero, en caso de no existir p, devolver NULL

Type get(List, int p);

Type set(List, Type, int p);

Type Remove(List, int p);

void insert(List, int p, Type value);

#endif /* LIST_H_ */
