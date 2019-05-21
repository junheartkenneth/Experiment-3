#include <iostream>
#include <conio.h>

using namespace std;

const int province = 2;
const int week = 7;

int main()
{
	int temperature[province][week];

	cout << "Enter all temperature for a week of first province and then second province. \n\n";


	for (int i = 0; i < province; ++i)
	{
		for (int j = 0; j < week; ++j)
		{
			cout << "Province " << i + 1 << ", Day " << j + 1 << " : ";
			cin >> temperature[i][j];
		}
	}


	cout << "\n\nDisplaying Values:\n";

	for (int i = 0; i < province; ++i)
	{
		for (int j = 0; j < week; ++j)
		{
			cout << "Province " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
		}
	}

	_getch();
	return 0;
}