#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int leftInterval, rightInterval, number;
	cout << "Enter left interval: ";
	cin >> leftInterval;
	cout << "Enter right interval: ";
	cin >> rightInterval;
	if (leftInterval > rightInterval)
	{
		int temp = leftInterval;
		leftInterval = rightInterval;
		rightInterval = temp;
	}
	cout << "We have next interval: [" << leftInterval << "-" << rightInterval <<"]"<< endl;
	cout << "Enter number to chech if it's present in interval: ";
	cin >> number;
	for (; number<leftInterval || number>rightInterval;)
	{
		cout << "Entered number out of range! Try again" << endl;
		cout << "Enter number: ";
		cin >> number;
	}
	cout << "Well done! Number " << number << " is present in interval [" << leftInterval << "-" << rightInterval <<"]"<< endl;
	return 0;
	
}
