#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    system("chcp 1251>null");
    cout << "������� �����: " << endl;
	string str;
	cin >> str;
	for(int i = 0 ; i < str.length(); i++)
    {
		if(str[i] == '�' )
        str[i] = '�';
        if(str[i] == '�' )
        str[i] = '�';
        if(str[i] == '�' )
        str[i] = '�';
		else
        str[i] += 3;
	}
    cout << "���� ������: " << endl;
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
    cout << "������� ���� ������:" << endl;
	string str;
	cin >> str;
	for(int i = 0 ; i < str.length(); i++)
    {
		if(str[i] == '�' )
        str[i] = '�';
        if(str[i] == '�' )
        str[i] = '�';
        if(str[i] == '�' )
        str[i] = '�';
		else
        str[i] -= 3;
	}
    cout << "�����: " << endl;
	cout << str;
	return 0;
}
