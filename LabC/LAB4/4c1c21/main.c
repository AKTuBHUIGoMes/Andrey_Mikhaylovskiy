#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

void ItoB(int n, char* s, int b )
{
    int indexStr = 0;
    char str[255];
    while(n)
    {
        if(n%b==0)
        {
            str[indexStr]=48;
            n/=b;
            indexStr++;
        } else
        {
            if(n%b>9)
                str[indexStr]=96+n%b-9;
            else
                str[indexStr]=n%b+48;
            n=(n-n%b)/b;
            indexStr++;
        }
    }
    for (int i = 0, j = indexStr-1; i < indexStr; i++, j--)
        s[i]=str[j];

    for ( int i = 0; i < indexStr; i++)
        printf("%c", s[i]);
    s = str;
}
char* ITOB(int n, char* str, int b)
{
    ItoB(n,str,b);
    return str;
}
int test_sum() {
    char str[255];
    assert(ITOB(12,str,2));
    assert(ITOB(5,str,2));
    assert(ITOB(3,str,2));
    return 0;
}

int main()
{
    char string[255];
    char symbol =49;
    int str = 1,n,b;
    scanf("%d", &n);
    scanf("%d", &b);
   // scanf("%s", string[0]);
    string[0]=1;
    string[1]=symbol;
   // printf("%c", string[1]);
    ItoB(n,string,b);
    //printf("\nHello World!\n");
    return 0;
}

