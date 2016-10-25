#include<iostream>

using namespace std;

void main()
{
	int a,i = 1;
	int b = 0,d=1,e=10;
	int front, end;
	int count=0;
	int check1, check2;
	cin >> a;
	while (a / i != 0)
	{
		b++;
		i = i * 10;
	}
	cout << b << endl;

	if (b % 2 == 1)
	{
		int c = b/2;
		for (i = 0; i < c; i++)
		{
			d *= 10;
		}
		front = a / (10*d);
		end = a % d;
		for (d = d / 10; d > 0; d = d / 10)
		{
			check1 = front / d;
			check2 = end % e;
			if (check1 == check2)
			{
				front = front% d;
				end = end / e;
				count++;
			}
			else
			{
				cout << "it is not the same backwards as forwards";
				break;
			}
		}
		if (count == c)
		{
			cout << "it is the same backwards as forwards";
		}
		//cout << "it is not the same backwards as forwards";
	}

	else
	{
		int c = b / 2;
		for (i = 0; i < c; i++)
		{
			d *= 10;
		}
		front = a / d;
		end = a % d;
		for (d = d/10; d > 0;d=d/10)
		{
			check1 = front / d;
			check2 = end % e;
			if (check1 == check2)
			{
				front = front% d;
				end = end / e;
				count++;
			}
			else
			{
				cout << "it is not the same backwards as forwards";
				break;
			}
		}
		if (count == c)
		{
			cout << "it is the same backwards as forwards";
		}
	}
	
	
}