#include "youngdeveloper.h"
void fr(int **arr, int n)
{
    for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr);
}

int check(int **arrl, int **arrk, int m1, int n1, int m2, int n2)
{
    int **arrlMini;
    arrlMini= (int**)malloc(m2*sizeof(int*));

    for(int i = 0; i < m2; i++)
        arrlMini[i] =(int*)malloc(n2*sizeof (int));

//    for(int onY = 0; onY < m1-m2; onY++)
//        for(int onX = 0; onX < n1-n2; onX++)
//            for(int i = onY; i < m1-m2; i++)
//                for(int j = onX; j < n1-n2; j++)
//                {

//                }
//    for(int onY = 0, onX = 0; onY < m1-m2 && onX < n1-n2 ;onX++, onY++)
//        for(int ; ; onX++)
//            for(int i = onY; i < m1-m2; i++)
//                for(int j = onX; j < n1-n2; j++)
//                {

//                }
    int onY = 0, onX = 0;
    while (1)
    {
        for (int i = onX, ii=0; i < m2; ii++,i++ )
            for (int j = onY, jj=0; j < n2; jj++, j++)
            {
                arrlMini[ii][jj] = arrk[i][j];
            }
        for (int i = onX, ii=0; i < m2; ii++,i++ )
        {
            for (int j = onY, jj=0; j < n2; jj++, j++)
            {
                if(arrlMini[ii][jj] != arrl[i][j])
                    break;
            }
            if(i == m2-1)
            {
                fr(arrlMini, m2);
                return 1;
            }
        }
        if( onY < m1-m2 && onX < n1-n2)
        {
            onY++; onX++; continue;
        }
        if( onY < m1-m2)
        {
            onY++; continue;
        }
        if( onX < n1-n2)
        {
            onX++; continue;
        }
    }

    return 0;
}

