#include <conio.h>
#include <string>
#include <iostream>

using namespace std;

int main() 
{
	string input; 
	cout << "Please enter a word: \n";
	cin >> input; 

	cout << "Reversed word is: \n";
	for (int i = input.length(); i >= 0; --i)
	{
		cout << input[i];
	}
	
	cout << "\nThe array size is: " << size(input);
	_getch();
	return 0;
}