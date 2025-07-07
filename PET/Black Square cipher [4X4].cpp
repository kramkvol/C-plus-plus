#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{

	system("chcp 1251>null");
	const int row_1 = 4;
	const int column_1 = 4;
    cout << "Введите строку: " << endl;
	string str;
	cin >> str;
	cout << "Шифр четного квадрата [4Х4] " << endl;

    char result[row_1][column_1];
   	result[0][0] = str[0];
	result[3][2] = str[1];
	result[3][1] = str[2];
	result[0][3] = str[3];
	result[2][3] = str[4];
	result[1][1] = str[5];
	result[1][2] = str[6];
	result[2][0] = str[7];
	result[1][3] = str[8];
	result[2][1] = str[9];
	result[2][2] = str[10];
	result[1][0] = str[11];
	result[3][0] = str[12];
	result[0][2] = str[13];
	result[0][1] = str[14];
	result[3][3] = str[15];

    for (int r = 0; r < row_1; r++)
	{
		for (int c = 0; c < column_1; c++)
		{
			cout << result[r][c] << " ";
		}
		cout << endl;
	}
};
