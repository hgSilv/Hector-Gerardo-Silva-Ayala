/*
 * set.h
 *
 *  Created on: 04/07/2018
 *      Author: is712655
 */

#ifndef SET_H_
#define SET_H_

typedef void * Type;
typedef enum {false, true} boolean;

typedef int (*Comparator)(Type, Type);
typedef Type (*Clone)(Type);
typedef void (*MyFree)(Type);

typedef struct strSet *Set;

Set set_create(Comparator, Clone, MyFree);
int set_size(Set);

boolean set_add(Set, Type data);


#endif /* SET_H_ */
