//////////////////////////////////////////////////////////////////////////////
// Source.cpp
// головний файл проекту – функція main
#include <iostream>
#include "Goods.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	Goods g;
	g.Read();
	g.Display();
	cout << g.getVartist() << endl;
	return 0;
}