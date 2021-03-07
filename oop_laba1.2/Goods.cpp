//////////////////////////////////////////////////////////////////////////////
// Goods.cpp
// ���� ��������� � ��������� ������ �����
#include "Goods.h"
#include <iostream>
using namespace std;
void Goods::setName(string value)
{
	name = value;
}
void Goods::setDate(string value)
{
	date = value;
}
bool Goods::setCount(double value)
{
	if (value > 0)
	{
		count = value;
		return true;
	}
	else
	{
		count = -value;
		return false;
	}
}
bool Goods::setPrice(double value)
{
	if (value > 0)
	{
		price = value;
		return true;
	}
	else
	{
		price = -value;
		return false;
	}
}
bool Goods::setNo(int value)
{
	if (value > 0)
	{
		no = value;
		return true;
	}
	else
	{
		no = 0;
		return false;
	}
}
string Goods::toString() const
{
	stringstream SS;
	double total = count * price;
	SS << " ����i���, ���: " << total << endl;
	return SS.str();
}

bool Goods::Init(string name, string date, double count, double price, int no)
{
	setName(name);
	setDate(date);
	return setCount(count) && setPrice(price) && setNo(no);
}
void Goods::Read()
{
	string name;
	string date;
	double count;
	double price;
	int no;
	cout << " ����� �����: "; cin >> name;
	cout << " ������ ����: "; cin >> date;
	do
	{
		cout << " ������ �i���i���: "; cin >> count;
		cout << " ������ �i��: "; cin >> price;
		cout << " ������ ����� ��������i: "; cin >> no;
	} while (!Init(name, date, count, price, no ));
}
void Goods::Display() const
{
	cout << "_______________________________________" << endl;
	cout << " �����: " << name << endl;
	cout << " ����: " << date << endl;
	cout << " �i���i���: " << count << endl;
	cout << " �i��: " << price << endl;
	cout << " ����� ��������i " << no << endl;
	cout << toString() << endl;
}
