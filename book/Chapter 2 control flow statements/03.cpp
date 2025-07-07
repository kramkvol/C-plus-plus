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
        cout << "укажите число от 1 до 3: " << endl;
        cin >> num;
        switch (num){
        case 1:
            cout << "это 1" << endl;
            break;
        case 2:
            cout << "это 2" << endl;
            break;
        case 3:
            cout << "это 3" << endl;
        default:
            cout << "это не число от 1 до 3" << endl;
            }
    }
}