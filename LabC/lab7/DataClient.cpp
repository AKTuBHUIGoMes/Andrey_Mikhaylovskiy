#include"DataClient.h"
#include"Person.h"
#include"Goods.h"
using namespace std;
#include<list>

list<profile<Person>> dbase;
list<profile<Goods>> gbase;

int setData(string Path)
{
	ofstream file(Path);
	if (!file)
	{
		cout << "File not created!";
		throw("End of che?");
	}
	else
	{
		cout << "File created successfully!" << endl;
	}

	auto clients = dbase.begin();
	int id = lastId();
	file << id << endl;
	while (id > 0)
	{
		file << clients->id << " ";
		file << clients->card->getName() << " ";
		file << clients->card->getPassport() << " ";
		file << clients->card->getDate() << " ";
		file << clients->card->getHistory() << " ";
		id--;
		clients++;
		file << endl;
	}

	id = howMuchG();
	file << id << endl;
	auto goods = gbase.begin();
	while (id > 0)
	{
		file << goods->id << " ";
		file << goods->card->getName() << " ";
		file << goods->card->getPrice() << " ";
		file << goods->card->getGivenPrice() << " ";
		file << goods->card->getDate() << " ";
		file << goods->card->getTimeOfSafe() << " ";
		id--;
		goods++;
		file << endl;
	}

	for (auto print = dbase.begin(); print != dbase.end(); print++)
	{
		delete print->card;
	}
	file.close();
	return 2281;
}

int deleter(int id)
{
	auto iter = dbase.begin();

	while (iter != dbase.end())
	{
		if (iter->id == id)
		{
			delete iter->card;
			dbase.erase(iter);
			break;
		}
		iter++;
	}

	auto iterG = gbase.begin();
	while (iterG != gbase.end())
	{
		if (iterG->id == id)
		{
			delete iterG->card;
			gbase.erase(iterG);
			break;
		}
		iterG++;
	}
	return 2287;
}

void showGoods()
{
	auto print = gbase.begin();

	while (print != gbase.end())
	{
		cout << print->id << "  " << print->card->getName() << "  ";
		cout << print->card->getPrice() << " $ " << print->card->getGivenPrice() << " $ "
			<< "  " << print->card->getDate() << "  " << print->card->getTimeOfSafe() << endl;

		print++;
	}
}

void showClients()
{
	auto print = dbase.begin();

	while (print != dbase.end())
	{
		cout << print->id << "  " << print->card->getName() << "  ";
		cout << print->card->getPassport() << "  " << print->card->getDate() << "  " << print->card->getHistory() << endl;

		print++;
	}
}

int getData(string Path)
{
	profile<Person> tempProfile;
	profile<Goods> tempGoods;

	string name, passport, dateOfSignUp, history, date, timeOfSafe;
	int price, priceGiven;

	ifstream file(Path);
	if (!file) {
		cout << "File not created!";
		throw("End of che?");
	}
	else {
		cout << "File created successfully!" << endl;
	}

	int amount;
	file >> amount;
	
	while (amount > 0)
	{
		file >> tempProfile.id;
		file >> name;
		file >> passport;
		file >> dateOfSignUp;
		file >> history;
		Person* tempPerson = new Person(name, passport, dateOfSignUp, history);
		tempProfile.card = tempPerson;
		dbase.push_back(tempProfile);
		amount--;
	}
	auto iterG = dbase.begin();
	file >> amount;
	int id;
	while (amount > 0)
	{
		file >> id;
		file >> name;
		file >> price;
		file >> priceGiven;
		file >> date;
		file >> timeOfSafe;
		Goods* tempGood = new Goods(name, price, priceGiven, date, timeOfSafe);
		tempGoods.card = tempGood;
		tempGoods.id = id;
		gbase.push_back(tempGoods);
		amount--;
		iterG++;
	}
	file.close();
	return 2282;
}

int pushClient(string namee = " ", string passCode = " ", string siDa = " ")
{
	bool flag = true;
	string name; string passport; string singUpData;
	int id;
	if (namee != "" && passCode != "" && siDa != "")
	{
		flag = false;
		name = namee; passport = passCode; singUpData = siDa;
	}
	if (flag)
	{
		cout << "\nEnter your name: ";
		cin >> name;
		cout << "\nEnter your passport code: ";
		cin >> passport;

	}
	for (auto it = dbase.begin(); it != dbase.end(); it++)
	{
		if (it->card->getPassport() == passport)
		{
			cout << "\nThere is already an account with this passport\n";
			return -1;
		}
	}
	if (flag)
	{
		cout << "\nEnter sing up data: ";
		cin >> singUpData;
	}
	profile<Person> tempProfile;
	Person* tempPerson = new Person(name, passport, singUpData, " ");
	tempProfile.card = tempPerson;
	tempProfile.id = lastId();
	dbase.push_back(tempProfile);
	return 2283;

}

int lastId()
{
	auto id = dbase.begin();
	int count = 0;
	for (; id != dbase.end(); id++)
	{
		count++;
	}
	return count;
}

int howMuchG()
{
	auto id = gbase.begin();
	int count = 0;
	for (; id != gbase.end(); id++)
	{
		count++;
	}
	return count;
}

int pushGood(int ide,int yn,string goodNamee = "", int pricee = 0, int givenPricee= 0, string dati = "", string safeTimee= "")
{
	bool flag = true;
	int n,id;
	int  price, givenPrice;
	string goodName, date, safeTime;
	if ( goodNamee != "" && pricee!= 0 && givenPricee != 0 &&  dati!= "" && safeTimee!= "")
	{
		flag = false;
		goodName = goodNamee; price = pricee; givenPrice = givenPricee; date = dati; safeTime= safeTimee ;
		id = ide;n = yn;
	}
	while (flag)
	{
		cout << "\nDo you have an account?(1.Yes 2.No)\n";
		cin >> n;
		if (n > 2 || n < 1)
		{
			cout << "Try again\n";
		}
		else break;
	}
	if (n == 1)
	{
		if (flag)
		{
			cout << "\nEnter your id: ";
			cin >> id;
		}
		bool exist = false;
		string Name;
		for (auto it = dbase.begin(); it != dbase.end(); it++)
		{
			if (it->id == id)
			{
				exist = true;
				Name = it->card->getName();
				break;
			}
		}
		if (exist == false)
		{
			cout << "There is no such id\n";
			return 0;
		}
		if (flag)
		{
			cout << "\nEnter good name: ";cin >> goodName;cout << "\nEnter all price of good: ";cin >> price;cout << "\nEnter deposit: ";cin >> givenPrice;cout << "\nEnter delivery data: ";cin >> date;cout << "\nEnter storage time: ";cin >> safeTime;
		}
			profile<Goods> tempProfile;
			Goods* tempGood = new Goods(goodName,price,givenPrice,date,safeTime);
			tempProfile.card = tempGood;
			tempProfile.id = id;
			gbase.push_back(tempProfile);
		return 1;
	}
	else if (n == 2)
	{
		pushClient("", "", "");
		return 1;
	}
	else
	{
		return 0;
	}
}

int CalculatePrice()
{
	int price = 0;
	for (auto it = gbase.begin(); it != gbase.end(); it++)
	{
		price += it->card->getGivenPrice();
	}
	return price;
}

int ProfitBad()
{
	int deposits = 0;
	for (auto it = gbase.begin(); it != gbase.end(); it++)
	{
		deposits += it->card->getPrice();
	}
	int profit = CalculatePrice() - deposits;
	return profit;
}

int ProfitGood()
{
	int deposits = 0;
	for (auto it = gbase.begin(); it != gbase.end(); it++)
	{
		deposits += it->card->getPrice();
	}
	return deposits;
}
