#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));

    int const SIZE = 10;
    int arr[SIZE]{1,2,0,2,3,0,5,6,2,9};
    int first = 0;
    int last = 0;
    int z = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == 0)
        {
            first = i;
            break;
        }
    }
    cout << "Индекс первого нуля " << first << endl;
    for (int j = first; j < SIZE-1; j++)
    {
        if (arr[j] == 0)
        {
            last = j;
        }
    }
    cout << "Индекс последнего нуля " << last << endl;
    for (int k = first; k < last; k++)
    {
        z+=arr[k];
    }
    cout << endl;
    cout << z << endl;
};
