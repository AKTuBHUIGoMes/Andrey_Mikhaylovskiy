#ifndef LISTSPISOK_H
#define LISTSPISOK_H
#include <malloc.h>
#include <stdio.h>
typedef struct node
{
    int dozens, units;
    struct node *next, *prev;
} NODE;

typedef struct list
{
 NODE *head, *tail;
} LIST;

void init(LIST *l);

void push_front(LIST *l, int doz, int un);

void push_back(LIST *l, int doz, int un);

void print(LIST *l);

void insert(LIST *l, NODE *prev, int data);

void clear(LIST *l);

#endif // LISTSPISOK_H
