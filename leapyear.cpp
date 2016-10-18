#include<iostream>

using namespace std;

void main()
{
	int a;
	for (;;)
	{
		cin >> a;
		if (a%4 == 0 && a != 0)
		{
			if (a % 100 == 0 && a%400 != 0)
			{
				cout << "this is not a leap year" << endl;
			}
			else
			{
				cout << "this is a leap year" << endl;
			}
		}
		else if (a == 0)
		{
			break;
		}
		else
		{
			cout << "this is not a leap year" << endl;
		}
	}
}