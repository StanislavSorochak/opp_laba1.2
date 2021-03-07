//////////////////////////////////////////////////////////////////////////////
// Goods.h
// заголовний файл Ц визначенн€ класу
#pragma once
#include <string>
#include <sstream>
using namespace std;
class Goods
{
private:
	string name;
	string date;
	double count;
	double price;
	int no;
public:
	string getName() const { return name; }
	string getDate() const { return date; }
	double getCount() const { return count; }
	double getPrice() const { return price; }
	int getNo() const { return no; }
	void setName(string);
	void setDate(string);
	bool setCount(double);
	bool setPrice(double);
	bool setNo(int);
	double getVartist() const { return count * price; }
	bool Init(string name, string date, double count, double price, int no);
	void Read();
	void Display() const;
	string toString() const;

};