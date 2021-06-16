// wrt.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <ctime> 
using namespace std;
int main()
{

	string strIn, strOut, strWrite;
	cin >> strIn >> strOut;
	int sqrSize = 0;
	for (int i = 1; i < strIn.size(); i++)
	{
		if (strIn.size() / i == i && strIn.size() % i == 0)
			sqrSize = i;
		if (strIn.size() / i < i)
			break;
	}
	if (sqrSize == 0)
	{
		cout << " not sqrt";
		return 0;
	}
	char** arr = new char*[sqrSize];

	for (int i = 0; i < sqrSize; i++)
		arr[i] = new char[sqrSize];

	for (int i = 0, index = 0; i < sqrSize; i++)
		for (int j = 0; j < sqrSize; j++)
		{
			arr[i][j] = strIn[index++];
		}
	int check = strOut.size();
	for (int i = 0, index = 0; i < sqrSize; i++)
	{
		for (int j = 0; j < sqrSize; j++)
		{
			if (index > strOut.size())
				break;
			if (arr[i][j] == strOut[index])
			{
				index++;
				//cout << "[" << i << "," << j <<  "] ->";
				strWrite += "[";
				strWrite += to_string(i);
				strWrite += ",";
				strWrite += to_string(j);
				if (index == strOut.size())
					strWrite += "]";
				else
					strWrite += "] ->";
				i = 0;
				j = 0;
				check--;
			}
		}
	}
	if (check == 0)
		cout << strWrite;
	else
		cout << "nothing";
	cout << endl;
	for (int i = 0, index = 0; i < sqrSize; i++)
	{
			delete arr[i];	
	}
	delete[] arr;
	cout << "runtime = " << clock() / 10000.0 << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
