#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main ()
{
    system("chcp 1251>null");
    srand(2);
    int nums[12];
    cout << "������ ��������� �����" << endl;
    for (int &x: nums)
    {
        x = rand()%10;
        cout << x <<" ";
    }
    cout << endl;
    int length = 0;
    cout << "������ �������: " << length << endl;
    cout << "�������� ����������� �������: " << endl;
    for (int &x: nums)
    {
        length++;
    }
    for(int k = 0; k < length; k++)
    {
        cout << nums[k] << " ";
    }
    cout << endl;
}