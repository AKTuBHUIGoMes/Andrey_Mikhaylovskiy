
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
