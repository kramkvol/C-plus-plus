#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    system("chcp 1251>null");
    cout << "Введите текст: " << endl;
	string str;
	cin >> str;
	for(int i = 0 ; i < str.length(); i++)
    {
		if(str[i] == 'э' )
        str[i] = 'а';
        if(str[i] == 'ю' )
        str[i] = 'б';
        if(str[i] == 'я' )
        str[i] = 'в';
		else
        str[i] += 3;
	}
    cout << "Шифр Цезаря: " << endl;
	cout << str;
	return 0;
}


#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    system("chcp 1251>null");
    cout << "Введите Шифр Цезаря:" << endl;
	string str;
	cin >> str;
	for(int i = 0 ; i < str.length(); i++)
    {
		if(str[i] == 'а' )
        str[i] = 'э';
        if(str[i] == 'б' )
        str[i] = 'ю';
        if(str[i] == 'в' )
        str[i] = 'я';
		else
        str[i] -= 3;
	}
    cout << "Текст: " << endl;
	cout << str;
	return 0;
}
