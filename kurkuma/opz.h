#ifndef OPZ_H
#define OPZ_H
#include <iostream>
using namespace std;
#include <steck.h>
#include <QString>

class C2Ppn {

    QChar curc;                   //the current character
    QString str_in, str_out;     //input & output strings
    int iin;                     //the index of the input string

    QChar nextChar();           //get the next character from str_in
    QChar nextChar(int*inn);
    bool isDigit(QChar c);
    int prior(QChar c);            //get the priority of the
                                  //character
  public:
    void convert(QString);        //convert to PPN
    QString  get_str_out()const;   //get the output string
};

QString replacement (QString strok);

//static int ind=0;


#endif // OPZ_H

//f = [](QChar e){int a = e.unicode(); char s; return s=a;};
