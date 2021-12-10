#include <iostream>
#include <conio.h>

using namespace std;

#pragma warning(disable : 4996)

int main()
{
	int chcount = 0;
	int wdcount = 0;
	char ch = 'a';

	cout << "Enter the string: ";
	while (ch != '\r')
	{
		ch = getche();
		if (ch == ' ')
		{
			wdcount++;
		}
		else
		{
			chcount++;
		}
	}
	cout << "\nWords: " << (wdcount + 1) << endl
	<< "Letters: " << (chcount - 1) << endl;

	system("pause");
	return 0;
}