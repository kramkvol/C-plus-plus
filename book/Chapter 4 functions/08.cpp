#include <iostream>
#include <cstdlib>
using namespace std;
// ��������� �� �������� ���� double  
// size ���������� ������ ������� 
// ��������� ��� ������� - ��������� �� ������ �������
double mean (double* m, int size)
{
    double sum = 0;
    // ���������� �����
    for (int k = 0; k < size; k++)
    {
        // m - �������� �������
        sum += m[k];
    }

    return sum/size;
}
int main()
{
    system("chcp 1251>nul");
    double A [] {2, 5, -2, 7, 44};
    double B [] {5, 10, 16};
	// ���������� ��� ������� � ��� ������
    cout << "������� �� ������� A: " << mean(A, 5) << endl;
    cout << "������� �� ������� B: " << mean(B, 3) << endl;

    system("pause>nul");

    return 0;

}