#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	cout << "Enter the string" << endl;
	char string[10];
	for (int i = 0; i < 10; i++)
		cin >> string[i];
	int small = 0;
	int capital = 0;
	for (int i = 0; i < 10; i++)
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
			capital++;
		if (string[i] >= 'a' && string[i] <= 'z')
			small++;
	}
	cout << "Number of capital letters are " << capital << endl;
	cout << "Number of small letters are " << small << endl;
	system("pause");
	return 0;
}
