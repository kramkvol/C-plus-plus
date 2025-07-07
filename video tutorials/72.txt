#include <iostream>
#include <string>
using namespace std;
class Human
{
    public:
    string weight;
    int age;
    string name;
};

int main()
{
    Human I;
   I.age = 16;
   I.name = "Olya";
   I.weight = "N";
   cout<< I.age << endl;
   cout<< I.name << endl;
   cout<< I.weight << endl;
   cout << "*****************"<< endl;
   Human you;
   you.age = I.age;
   you.name = "you";
   you.weight = "L";
    cout<< you.age << endl;
    cout<< you.name << endl;
    cout<< you.weight << endl;