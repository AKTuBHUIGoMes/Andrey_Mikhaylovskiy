#ifndef STECK_H
#define STECK_H


class steck
{
public:
    steck();
};

#include <iostream>
#include <new>
#include<QString>
using namespace std;


template <typename T>
class STACK
{
private:
  T* stack;
  int count;

public:

  STACK()
  {
    stack = nullptr;
    count = 0;
  }

  // помістити елемент в стек
  void push(T item)
  {
    T* tmp;


    try {

      tmp = stack;


      stack = new T[count + 1];


      count++;


      for (int i = 0; i < count - 1; i++)
        stack[i] = tmp[i];


      stack[count - 1] = item;


      if (count > 1)
        delete[] tmp;
    }
    catch (bad_alloc e)
    {

      cout << e.what() << endl;
    }
  }


  T pop()
  {
     T ret;
    if (count == 0)
      return 'l'; // стек пуст
       //return ret;
       // throw (QString) "w";
    QString prov = stack[count];

    count--;
    prov = stack[count];
    return stack[count];
  }


  // Просмотр элемента в вершине стека
  T Head()
  {
    if (count == 0)
      return '0';
    return stack[count - 1];
  }


  STACK(const STACK& st)
  {
    try {

      stack = new T[st.count];


      count = st.count;
      for (int i = 0; i < count; i++)
        stack[i] = st.stack[i];
    }
    catch (bad_alloc e)
    {

      cout << e.what() << endl;
    }
  }


  STACK operator=(const STACK& st)
  {

    if (count > 0)
    {
      count = 0;
      delete[] stack;
    }


    try {

      stack = new T[st.count];


      count = st.count;
      for (int i = 0; i < count; i++)
        stack[i] = st.stack[i];
    }
    catch (bad_alloc e)
    {

      cout << e.what() << endl;
    }


    return *this;
  }


  ~STACK()
  {
    if (count > 0)
      delete[] stack;
  }

  int Count()
  {
    return count;
  }

  bool IsEmpty()
  {
    return count == 0;
  }


  void Print()
  {
    T* p;


    p = stack;


    cout << "Stack: " << endl;
    if (count == 0)
      cout << "is empty." << endl;

    for (int i = 0; i < count; i++)
    {
      cout << "Item[" << i << "] = " << *p << endl;
      p++;
    }
    cout << endl;
  }
};




#endif // STECK_H
