#pragma once
#include "Person.h"
#include "Goods.h"
#include <iostream>
#include <fstream>

int setData(string Path);
int getData(string Path);
int pushClient(string namee, string passport, string singData);
int pushGood(int ide,int yn,string goodNamee, int allPricee, int depositt, string deliveryDataa, string storageTimee);
void showClients();
void showGoods();
int deleter(int id);
int lastId();
int howMuchG();
int ProfitGood();
int CalculatePrice();
int ProfitBad();
