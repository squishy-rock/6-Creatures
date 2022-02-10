
#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;
void appear1(int m);
void appear2(int m);
void appear3(int m);
void appear4(int m);

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD p = { 0,0 };
	int i = 0, n;
	while (i <= 19)
	{
		system("CLS");
		if (i == 0)
		{
			p.X = 3;
			p.Y = 3;
			n = 3;
		}

		SetConsoleCursorPosition(screen, p);
		appear1(n);
		Sleep(1000);
		system("CLS");
		p.X += 3;
		n += 3;

		SetConsoleCursorPosition(screen, p);
		appear2(n);
		Sleep(1000);
		system("CLS");
		p.X += 3;
		n += 3;
	
		SetConsoleCursorPosition(screen, p);
		appear3(n);
		Sleep(1000);
		system("CLS");
		p.X += 3;
		n += 3;


		SetConsoleCursorPosition(screen, p);
		appear4(n);
		Sleep(1000);
		system("CLS");
		p.X += 3;
		n += 3;
	
		SetConsoleCursorPosition(screen, p);
		appear3(n);
		Sleep(1000);
		system("CLS");
		p.X += 3;
		n += 3;

		SetConsoleCursorPosition(screen, p);
		appear1(n);
		n += 3;
		Sleep(1000);
		system("CLS");
		p.X += 3;

		SetConsoleCursorPosition(screen, p);
	}

	system("PAUSE");
	return 0;
}

void appear1(int m)
{
	int n = m, r = m;
	cout << "\\/\n";
	while (n--)
		cout << " ";
	cout << " 00\n";
	while (r--)
		cout << " ";
	cout << "000000000~\n";
}


void appear2(int m)
{
	int n = m, r = m;
	cout << " \\/\n";
	while (n--)
		cout << " ";
	cout << " 00 0\n";
	while (r--)
		cout << " ";
	cout << "0000 0000~\n";
}

void appear3(int m)
{
	int n = m, r = m;
	cout << " \\/\n";
	while (n--)
		cout << " ";
	cout << " 00 00\n";
	while (r--)
		cout << " ";
	cout << "000 0000~\n";
}


void appear4(int m)
{
	int n = m, r = m;
	cout << " \\/\n";
	while (n--)
		cout << " ";
	cout << " 00 000\n";
	while (r--)
		cout << " ";
	cout << "000 000~\n";
}