#include "listspisok.h"
#include <oper.h>
void init(LIST *l)
{
    l->head = NULL;
    l->tail = NULL;
}

void push_front(LIST *l, int doz, int un)
{
    NODE *temp = (NODE *)malloc(sizeof(NODE));
    if (temp == NULL)
        return;

    if (l->head == NULL)
    {
        temp->next = NULL;
        temp->dozens = doz;
        temp->units = un;

        l->head = l->tail = temp;
    }
    else if (l->head->next == NULL)
    {
        temp->next = l->tail;
        temp->prev = NULL;
        temp->dozens = doz;
        temp->units = un;

        l->head = temp;
        l->tail->prev = l->head;
    }
    else
    {
        temp->next = l->head;
        temp->prev = NULL;
        temp->dozens = doz;
        temp->units = un;

        l->head->prev = temp;
        l->head = temp;
    }
}

void push_back(LIST *l, int doz, int un)
{
    NODE *temp = (NODE *)malloc(sizeof(NODE));
    if (temp == NULL)
        return;

    if (l->head == NULL)
    {
        temp->next = NULL;
        temp->prev = NULL;
        temp->dozens = doz;
        temp->units = un;

        l->head = l->tail = temp;
    }
    else if (l->head->next == NULL)
    {
        temp->next = NULL;
        temp->prev = l->head;
        temp->dozens = doz;
        temp->units = un;

        l->tail = temp;
        l->head->next = l->tail;
    }
    else
    {
        temp->next = NULL;
        temp->prev = l->tail;
        temp->dozens = doz;
        temp->units = un;
        l->tail->next = temp;
        l->tail = temp;
    }
}



void print(LIST *l)
{
    NODE *temp = l->head;
    while (temp != NULL)
    {
        printf("%d  ", temp->dozens);
        temp = temp->next;
    }
    printf("\n");
}

void insert(LIST *l, NODE *prev, int doz, int un)
{
    if (prev == NULL)
    {
        push_front(l, doz, un);
        return;
    }

    if (prev == l->tail)
    {
        push_back(l, doz, un);
        return;
    }
    NODE *temp = (NODE *)malloc(sizeof(NODE));
    if (temp == NULL)
        return;

    temp->dozens = doz;
    temp->units = un;
    temp->next = prev->next;
    temp->prev = prev;
    NODE *tork = prev->next;
    tork->prev = temp;
    prev->next = temp;
}

void clear(LIST *list)
{
    NODE *li = list->head, *temp;
    while (li != NULL)
    {
        temp = li;
        li = li->next;
        free(temp);
    }

    list->head = NULL;
    list->tail = NULL;
}
