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
        cout <<"сумма квадратов чисел от 1 до " << n <<": "<< s << endl;
}