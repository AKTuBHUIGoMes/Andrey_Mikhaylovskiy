#include <iostream>
#include <assert.h>
#include "DataClient.h" 

using namespace std;

int main()
{
	assert(getData("VetromStat.txt") == 2282);
	showClients();
	showGoods();
	assert(	pushClient("","","") == 2283);
	assert(pushGood(1,1,"massiv",123,456,"hahah","check") == 1);
	assert(deleter(5) == 2287);
	assert(getData("VetromStat.txt") == 2282);
	assert(getData("VetromStat.txt") == 2282);
	CalculatePrice() ;
	ProfitBad();
	ProfitGood() ;
	assert(setData("VetromStat.txt") == 2281);
}
