#ifndef BINTREE_H
#define BINTREE_H
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct NODE {
  int field;           // поле данных
  struct NODE *left;  // левый потомок
  struct NODE *right; // правый потомок
}tnode;
int correctInput();
void freemem(  tnode *tree);
 tnode * addnode(int x,   tnode *tree);
void treeprintInf( tnode *tree);
void treeprint( tnode *tree);
#endif // BINTREE_H
