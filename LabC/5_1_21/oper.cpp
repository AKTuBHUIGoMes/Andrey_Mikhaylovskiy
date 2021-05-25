#include "oper.h"

//int Equal(node a, node b)
//{
//    if (a.dozens == b.dozens && a.units == b.units)
//        return 0;
//    return (a.dozens < b.dozens) ? 1 : -1;
//    return (a.units < b.units) ? 1 : -1;
//}

struct list * funk (LIST *lst1, LIST *lst2)
{
    LIST *lst3;
    NODE *temp1 = lst1->head;
    while (temp1 != NULL)
    {
        NODE *temp2 = lst2->head;
        while (temp2 != NULL)
        {
            if(temp2->dozens == temp1->dozens)
                break;
            temp2=temp2->next;
            if(temp2 == NULL)
                push_back(lst3, temp2->dozens, 0);
        }
        temp1 = temp1->next;
    }
    lst3->tail= lst1->head;
    return lst3;
}
