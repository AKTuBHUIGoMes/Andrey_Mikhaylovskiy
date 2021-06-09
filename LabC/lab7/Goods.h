#pragma once
#include <string>
using namespace std;

class Goods
{
public:
	Goods() : name(""), price(0), givenPrice(0), date(""), timeOfSafe(""){};

	Goods(string na, int pric, int givpri, string dat, string timofsa)
		: name(na), price(pric), givenPrice(givpri), date(dat), timeOfSafe(timofsa){};

	string getName() { return name; }
	int getPrice() { return price; }
	int getGivenPrice() { return givenPrice; }
	string getDate() { return date; }
	string getTimeOfSafe() { return timeOfSafe; }

	void setName(string name) { this->name = name; }
	void setPrice(int price) { this->price = price; }
	void setGivenPrice(int givenPrice) { this->givenPrice = givenPrice; }
	void setDate(string date) { this->date = date; }
	void setTimeOfSafe(string timeOfSafe) { this->timeOfSafe = timeOfSafe; }

private:
	string name;
	int price;
	int givenPrice;
	string date;
	string timeOfSafe;
};
