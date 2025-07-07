#include iostream
#include cstdlib

using namespace std;

int main()
{
 system(chcp 1251);

 int num;
  ссылка на переменную
 int &ref = num;
 num = 100;
  проверка значение переменной и ссылки
 cout  num =   num  endl;
 cout  ref =   ref  endl;
  присваивание значения ссылке
 ref = 200;
  проверка значения переменной и ссылки
 cout  num =   num  endl;
 cout  ref =   ref  endl;
}