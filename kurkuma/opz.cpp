#include <opz.h>
using namespace std;
inline int C2Ppn::prior(QChar c1) {
    int d = c1.unicode();
    char c = d;
    switch(c) {
        case '(': return 1;
        case '+': case '-': return 2;
        case '*': case '/': return 3;
        default: return 0;
    }
}

inline bool C2Ppn::isDigit(QChar c) {
    return (c>='a' && c<='z');
}

inline QChar C2Ppn::nextChar() {
    if(iin < str_in.length()) {
        int d = str_in[iin++].unicode();
        char c = d;
        return curc = c;
    }
    else return curc = '\0';
}



QString C2Ppn::get_str_out()const
{
    return str_out;
}

inline QChar C2Ppn::nextChar(int* inn) {
    if(*inn < str_in.length()) {
        int d = str_in[(*inn)++].unicode();
        char c = d;
        return curc = c;
    }
    else return curc = '\0';
}

 char trans (QChar e) {int a = e.unicode(); char s; return s=a;};
void  C2Ppn::convert (QString str)
{
    int was_op = 0, np = 0; // oper && brc
STACK<QChar> op_stack;
str_in = str;
str.isEmpty();
if ((!isDigit(str_in[0])) && str_in[0] != '(')
    throw (QString) "напиши нормально ";
int ind=0;
while (nextChar(&ind) != nullptr) {
    iin=ind;
 if(isDigit(curc)){
     str_out+=curc;
     was_op = 0;
     continue;
 }
 //else str_out+='';
char forSwitch = trans(curc);
 switch (forSwitch){
    case('('):
        op_stack.push(curc);
        ++np;
        was_op = 0;
     break;
    case '*' : case'/' : case'+' : case '-':
     if (iin == str_in.length()) //                                                                                                  length
        throw (QString) "error syntax";
     if (!was_op) {
         was_op = 1;
         while(prior(curc) <= prior(op_stack.Head())){
             str_out += op_stack.pop();
         }
         if(prior(curc) > prior(op_stack.Head())){
             op_stack.push(curc);
         }
         break;
     }
     else throw (QString) "durachok";

 case ')':
     if(was_op)
         throw (QString) "?)?";
     else{// curc =trans(op_stack.pop());
         while (((curc = op_stack.pop())) != '(' && np>0){
             if (op_stack.Count()==0)
                 throw (QString) "errorr";
             str_out += curc;
         }}
     --np;
     break;
 default:{
     throw (QString) "invalid symbol in  string";
 }
 }
//RAMZES(2,0,4);
}
while(op_stack.Head() != '0')
    str_out += op_stack.pop();
}


QString replacement (QString stroka)
{
    int sizeString = stroka.size();
    QChar currentSymbol;
    for ( int j = 0, countInArrayVariables = 0; j < sizeString;)
    {
        currentSymbol = stroka[j];
        if ( currentSymbol != '+' && currentSymbol != '-' && currentSymbol != '*' && currentSymbol != '/')
        {
            char strk = stroka[j].unicode();


            cin >> strk;
            stroka[j].unicode()=1;
            countInArrayVariables++;
        }
        j++;

    }
    return stroka;

}


