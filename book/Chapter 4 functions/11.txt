#include <iostream>
#include <cstdlib>
using namespace std;
// вычисляет длинну строк
int getLength(char* str)
{
    int s = 0;
    for (int i = 0; str[i]; i++)
    {
        s++;
    }
    return s;
}

// число пробелов в строке
int getSpace (char* str)
{
    int s = 0;
    for(int i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            s++;
        }
        return s;
    }
}

void show (char* str)
{
    cout << "Фраза: " << str << endl;
    cout << "Символов: " << getLength(str) << endl;
    cout << "Пробелы: " << getSpace(str) << endl;
    for(int k = 1; k < 35; k++)
    {
        cout << "-";
    }
    cout << endl;
}

int main()
{
    system("chcp 1251>nul");

    char txt[100] = "пишу говонокод на с++";
    show(txt);
    show("В С++ есть классы и объекты: ");

    system("pause>nul");

    return 0;
}
