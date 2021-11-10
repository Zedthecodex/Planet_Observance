#ifndef VECTOR_H
#define VECTOR_H

#define VECTOR_INITIAL_LIMIT 5

typedef struct Vector
{
    void** data;
    int limit;
    int count;
    void (*push_back)(struct Vector*, void*);
    void (*fast_remove)(struct Vector*, int);
    void (*free)(struct Vector*);
} Vector;

void VectorInit(Vector* vector);

#endif