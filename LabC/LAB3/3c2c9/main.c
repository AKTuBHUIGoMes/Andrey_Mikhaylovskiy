#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <youngdeveloper.cpp>
#include <youngdeveloper.h>
int correctInput()
{
    int num;
    while (scanf("%d",&num) != 1)
    {
            printf("\n yodovin ");
            while(getchar() != 10);
    }
    return num;
}

int main()
{
    int **arrk, **arrl;
    int  i,n, m, n2,m2;

    printf("k (castle) : \n");
    printf("n = ");
    n = correctInput();
    printf("m = \n");
    m = correctInput();

    arrk = (int**)malloc(m*sizeof(int*));
    for(i = 0; i < m ; i++) {
        arrk[i] = (int*)malloc(n * sizeof (int));
    }

    printf("l(key) : \n");
    printf("n = ");
    n2 = correctInput();
    printf("m = \n");
    m2 = correctInput();

    arrl = (int**)malloc(m2*sizeof(int*));
    for(i = 0; i < m2 ; i++) {
        arrl[i] = (int*)malloc(n2 * sizeof (int));
    }
    int sc=0;
    scanf("%d",&sc);
    if(!sc)
    {
    for(i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            arrk[i][j]=correctInput();
        }
    for(i = 0; i < m2; i++)
        for(int j = 0; j < n2; j++)
        {
            arrl[i][j]=correctInput();
        }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            printf("%d", arrk[i][j]);
            printf(" ");
        }
        }else if(sc == 1)
        {
        for(i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
            {
                arrk[i][j]=1;
            }
        for(i = 0; i < m2; i++)///////////////////////////////
            for(int j = 0; j < n2; j++)
            {

                arrl[i][j]=1;
            }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            {
                printf("%d", arrk[i][j]);
                printf(" ");
            }
    }
   if(check(arrk,arrl,m,n,m2,n2))
           printf("true");

    for(i = 0; i < n; i++)
        free(arrk[i]);
    for(i = 0; i < n; i++)
        free(arrl[i]);
    free(arrk);
    free(arrl);
    printf("false");
    return 0;
}
