#include <iostream>
#include <conio.h>
using namespace std;

void text(char* ch)
{
	cout << ch << endl;
}

void HL (char* ch, void f(char*)) { f(ch); };

int main()
{
	char* ch = "Привет";
	HL(ch, text);
	getchar();
	return 0;
}

//функция HL вызывает функцию text, путем получения её из параметра. Таким образом можно написать множество функций с данным возвращаемым и получаемым в параметр типами и при необходимости просто вписывать их имена для вызова в функцию. 