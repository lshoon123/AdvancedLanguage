#include<iostream>

using namespace std;

void main()
{
	int a,b;
	while (1)
	{
		cin >> a;
		cout << "What kind of Algorithm do you want?" << endl;
		cout << "1. if   2. switch" << endl;
		cin >> b;
		switch (b)
		{
		case(1) :
		{
			if (a == 1)
			{
				cout << "January" << endl;
			}
			else if (a ==2)
			{
				cout << "Febrary" << endl;
			}
			else if (a == 3)
			{
				cout << "March" << endl;
			}
			else if (a == 4)
			{
				cout << "April" << endl;
			}
			else if (a == 5)
			{
				cout << "May" << endl;
			}
			else if (a == 6)
			{
				cout << "June" << endl;
			}
			else if (a == 7)
			{
				cout << "July" << endl;
			}
			else if (a == 8)
			{
				cout << "Aguest" << endl;
			}
			else if (a == 9)
			{
				cout << "September" << endl;
			}
			else if (a == 10)
			{
				cout << "October" << endl;
			}
			else if (a == 11)
			{
				cout << "November" << endl;
			}
			else if (a == 12)
			{
				cout << "December" << endl;
			}
			break;
		}
		case(2) :
			switch (a)
			{
			case 1:
				cout << "January" << endl;
				break;
			case 2:
				cout << "February" << endl;
				break;
			case 3:
				cout << "March" << endl;
				break;
			case 4:
				cout << "April" << endl;
				break;
			case 5:
				cout << "May" << endl;
				break;
			case 6:
				cout << "June" << endl;
				break;
			case 7:
				cout << "July" << endl;
				break;
			case 8:
				cout << "Aguest" << endl;
				break;
			case 9:
				cout << "September" << endl;
				break;
			case 10:
				cout << "October" << endl;
				break;
			case 11:
				cout << "November" << endl;
				break;
			case 12:
				cout << "December" << endl;
				break;
			default:
				cout << "it is not collect" << endl;
			}
		}
		break;
	}
}