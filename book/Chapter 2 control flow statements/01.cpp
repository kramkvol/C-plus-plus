#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    system("chcp 1251>nul");
    int n, s = 0, k;
    cout <<"������� ������: ";
    cin >> n;
    for (int k = 1; k < n; k++)
    {
        s+=k*k;
    }
        cout << "C���� ��������� ����� �� 1 �� N = "<<n<<": " <<s<<endl;
}

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    system("chcp 1251>nul");
    int n, s, k;
    cout <<"������� ������: ";
    cin >> n;
    for (int k = 1, s = 0; k < n;s+=k*k, k++)
    cout << "C���� ��������� ����� �� 1 �� N = "<<n<<": " <<s<<endl;
}