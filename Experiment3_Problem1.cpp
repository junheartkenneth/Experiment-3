#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, n, high, low;
	float arr[10], temp, sum = 0.0, average;

	cout << "Enter no. array elements: ";
	cin >> n;
	while (n > 10 || n <= 0)
	{
		cout << "Error! Number should be in range of (1 to 9)." << endl;
		cout << "Enter the number again: ";
		cin >> n;
	}

	cout << "Enter array elements: \n";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	high = arr[0];
	for (i = 0; i < n; i++)
	{
		if (high < arr[i])
			high = arr[i];
	}
	low = arr[0];
	for (i = 0; i < n; i++)
	{
		if (low > arr[i])
			low = arr[i];
	}
	cout << "Largest element : " << high;
	cout << "\nSmallest element : " << low;

	for (i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "\nThe sum of the array elements is: " << sum;

	average = sum/n;
	cout << "\nThe average of the array elements is: " << average;

	_getch();
	return 0;
}