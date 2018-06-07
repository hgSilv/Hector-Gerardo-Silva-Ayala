/*
 * string.h
 *
 *  Created on: 07/06/2018
 *      Author: is712655
 */

#ifndef STRING_H_
#define STRING_H_

typedef struct strString * String;

String create(char * chars);

void destroy(String);

void print(String);

void println(String);

unsigned int length(String);

char charAt(String , int index); // si index no es válido, devuelve 0

String clone(String);






#endif /* STRING_H_ */
