#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    system("chcp 1251>null");
    int n = 10, s = 0, k = 1;
    start:
        s+=k*k;
        if(k<n){k++;}
        goto start;
        cout <<"����� ��������� ����� �� 1 �� " << n <<": "<< s << endl;
}