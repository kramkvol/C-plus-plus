#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main ()
{
    system("chcp 1251>null");
    int num, k;
    for(k = 1; k < 5; k++)
    {
        cout << "������� ����� �� 1 �� 3: " << endl;
        cin >> num;
        switch (num){
        case 1:
            cout << "��� 1" << endl;
            break;
        case 2:
            cout << "��� 2" << endl;
            break;
        case 3:
            cout << "��� 3" << endl;
        default:
            cout << "��� �� ����� �� 1 �� 3" << endl;
            }
    }
}