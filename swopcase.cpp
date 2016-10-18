#include<iostream>
#include<ctype.h>

using namespace std;

int isupper(int somechar)
{
	if (65 <= somechar && somechar <= 90)
	{
		return somechar;
	}
	else
	{
		return 0;
	}
}
int islower(int somechar)
{
	if (97 <= somechar && somechar <= 122)
	{
		return somechar;
	}
	else
	{
		return 0;
	}
}
int toupper(int somechar)
{
	somechar = somechar + 32;
	return somechar;
}
int tolower(int somechar)
{
	somechar = somechar - 32;
	return somechar;
}
void main()
{
	char a;
	int b,d;
	char c;
	cin >> a;
	cout << "what do you want to operate?" << endl;
	cout << "1. isupper	2. islower	3. toupper	4,tolower" << endl;
	cin >> b;
	switch (b)
	{
		case 1:
			d = isupper(a);
			cout << d << endl;
			break;
		case 2:
			d = islower(a);
			cout << d << endl;
			break;
		case 3:
			c = toupper(a);
			cout << c << endl;
			break;
		case 4:
			c = tolower(a);
			cout << c << endl;
			break;
	}
}