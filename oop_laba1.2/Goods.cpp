//////////////////////////////////////////////////////////////////////////////
// Goods.cpp
// файл реалізації – реалізація методів класу
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
	SS << " Вартiсть, грн: " << total << endl;
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
	cout << " Вести назву: "; cin >> name;
	cout << " Ввести дату: "; cin >> date;
	do
	{
		cout << " Ввести кiлькiсть: "; cin >> count;
		cout << " Ввести цiну: "; cin >> price;
		cout << " Ввести номер накладноi: "; cin >> no;
	} while (!Init(name, date, count, price, no ));
}
void Goods::Display() const
{
	cout << "_______________________________________" << endl;
	cout << " Назва: " << name << endl;
	cout << " Дата: " << date << endl;
	cout << " Кiлькiсть: " << count << endl;
	cout << " Цiна: " << price << endl;
	cout << " Номер накладноi " << no << endl;
	cout << toString() << endl;
}
