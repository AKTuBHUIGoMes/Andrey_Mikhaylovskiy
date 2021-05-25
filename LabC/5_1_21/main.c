#include <stdio.h>
#include <listspisok.h>
#include <listspisok.cpp>
#include <oper.h>
#include <oper.cpp>
int main()
{
    LIST *list1;
    //init(list1);
    list1->head= NULL;
    list1->tail = NULL;
    push_back(list1, 1,0);
    push_back(list1, 2,0);
    push_back(list1, 3,0);
    LIST *list2;
    init(list2);
    push_back(list2, 1,0);
    push_back(list2, 2,0);
    push_back(list2, 3,0);
    LIST *lst3 = funk(list1, list2);
    print(lst3);
    printf("Hello World!\n");
    return 0;
}
