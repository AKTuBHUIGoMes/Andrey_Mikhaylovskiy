#define _CRT_SECURE_NO_WARNINGS

#include "klassik.h"




void cleanOutPut()
{
    for(int i =0; i < 20; ++i)
    printf("\n");
}

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

void AnyButton()
{
      printf("press any......................");
    _getch();
}
void menyBy()
{
    double summ=0;
    while(1)
    {
        system("cls");
        printf("1) Input new summ\n2) Output in Euro\n3) Output exchange rate table\n4) \n5) Info\n6) Exit \n");

        switch (correctInput())
        {
        case 1 :
            system("cls");
            printf("write summ\n");
            scanf("%lf", &summ);
            printf("superclass");
            _getch();
            system("cls");
            break;
        case 2 :
            system("cls");
            printf("in euro = %lf\n",summ/3.1);
            printf("in dollar = %lf\n",summ/2.59);
            printf("in rub = %lf\n",summ/0.034);
            AnyButton();
            break;
        case 3 :
            system("cls");
            printf("vl\tbut\tsell\t\n$\t2.565\t2.572\n"
                                    "r\t3.405\t3.425\n"
                                    "e\t3.091\t3.100\n");
            AnyButton();
            break;
        case 4 :
            system("cls");
            printf("most profit is = 0.009 \n");
            AnyButton();
            break;
        case 5 :
            system("cls");
            printf("Приорбанк  хRBI\n+375-17-289-90-90,\n"
                        " 487 (A1, МТС, life) \n ноутбук игровой два гига три Rдра\n");
            AnyButton();
            break;
        case 6 :
            system("cls");
            AnyButton();
            return;
        //default: break;
        }

    }

}

