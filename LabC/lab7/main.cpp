#include"DataClient.cpp"

using namespace std;

int PrintMenu()
{
	while (1)
	{
		cout << "\n Choose variant:\n"
			"1. Show all clients\n" //done
			"2. Show all goods\n" //done
			"3. Add good\n"//done
			"4. Add account\n" //dome
			"5. Delete Good\n" //done
			"6. Calculate Profit\n"//dine
			"7. Calculate price of all Goods\n"//done
			"8. Exit\n";//done
		int digit;
		cin >> digit;
		if (digit > 8 || digit < 1)
		{
			cout << "\nTry again\n";
		}
		else
		{
			return digit;
		}
	}
}

int main()
{

	getData("Text.txt");

	while (1)
	{
		switch (int choise = PrintMenu())
		{
		case 1:
			showClients();
			break;
		case 2:
			showGoods();
			break;
		case 3:
			pushGood(1,1,"",0,0,"","");
			break;
		case 4:
			pushClient("","","");
			break;
		case 5:
			int id;
			cin >> id;
			deleter(id); 
			break;
		case 6:
			cout << CalculatePrice() << endl;
			break;
		case 7:
			cout << "Profit in bad case: " << ProfitBad();
			cout << "\nProfit in good case: " << ProfitGood() << endl;
			break;
		case 8:
			setData("Text.txt");
			return 0;
		default:
			cout << "\nSomething goes bad\n";
			return 0;
		}
	}
}
