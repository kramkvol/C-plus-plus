#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{

    system("chcp 1251>null");
    const int row_1 = 4;
    const int column_1 = 4;
    cout << " Шифр четного квадрата [4Х4] " << endl;

    char result[row_1][column_1];
        for (int r = 0; r < row_1; r++)
	{
		for (int c = 0; c < column_1; c++)
		{
		    cin >> result[r][c];
		}
		cout << endl;
	}
	cout << " Шифр четного квадрата [4Х4]" << endl;
    string str;
    cout << " Cтрока: " << endl;;
   	str[1] = result[3][2];
	str[2] = result[3][1];
	str[3] = result[0][3];
	str[4] = result[2][3];
	str[5] = result[1][1];
	str[6] = result[1][2];
	str[7] = result[2][0];
	str[8] = result[1][3];
	str[9] = result[2][2];
	str[10] = result[2][2];
	str[11] = result[1][0];
   	str[12] = result[3][0];
	str[13] = result[0][2];
	str[14] = result[0][1];
	str[15] = result[3][3];
    for(int i = 0; i < 16; i++)
    { 
	cout << str[i];
    }
};
