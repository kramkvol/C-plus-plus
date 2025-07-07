#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251> nul" );
    srand(2);
    const int wind = 4;
    const int height = 4;
    char arr[height][wind];
    for(int i = 0; i < height; i++)
    {
        for (int j = 0; j < wind; j++)
        {
            // случайная буква от A до Z
            arr[i][j] = 'A' + rand()%25;
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }


    system("pause>nul");
}
