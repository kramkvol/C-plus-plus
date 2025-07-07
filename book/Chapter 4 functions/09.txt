#include <iostream>
#include <cstdlib>
using namespace std;

const int n = 3;
void show (int M[][n], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    system("chcp 1251>nul");
    int A [2][n] {
                        {2, 5, -2},
                        {1, 5, 33}
                    };
    int B [][n] ={
                        {5, 10, 16},
                        {5, 10, 16},
                        {5, 10, 16},
                        {5, 10, 16}
                 };
    cout << "первый массив: " << endl;
    show(A,2);
    cout << "второй массив: " << endl;
    show(B,4);
    system("pause>nul");

    return 0;
}