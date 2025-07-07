#include "pch.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	system("chcp 1251>nul");
	// массив указателей
	const char* str[3] = { {"красный"},{"синий"},{"зеленый"} };
	// отображение строк
	for (int i = 0; i < 3; i++)
	{
		cout << str[i] << endl;
	}
	// обращение к элементам масисва
	cout << str[0][3] << str[1][1] << str[0][1];
	cout << str[2][5] << str[1][5] << endl;
}