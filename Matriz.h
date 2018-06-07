#ifndef MATRIZ_H_
#define MATRIZ_H_

typedef struct matriz *Matriz;

Matriz create (int r. int c);
void destroy (Matriz);
void setValue (Matriz ,int x, int y, float value);
void print(Matriz);
Matriz suma(Matriz, Matriz);
Matriz multi(Matriz, Matriz);

#endif /*MATRIZ_H_*/

