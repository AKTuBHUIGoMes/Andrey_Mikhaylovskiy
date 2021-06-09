#pragma once
using namespace std;
#include <string>

class Person
{
public:
	Person() : name(""), passport(""), dateOfSignUp(""), history(""){};

	Person(string na, string pass, string date, string his)
		: name(na), passport(pass), dateOfSignUp(date), history(his){};

	string getName() { return name; }
	string getPassport() { return passport; }
	string getDate() { return dateOfSignUp; }
	string getHistory() { return history; }

	void setName(string name) { this->name = name; }
	void setPassport(string passport) { this->passport = passport; }
	void setDate(string date) { this->dateOfSignUp = date; }
	void setHistory(string history) { this->history = history; }

private:
	string name;
	string passport;
	string dateOfSignUp;
	string history;
};

template <typename TYPE>
struct profile
{
	int id;
	TYPE *card;
};
