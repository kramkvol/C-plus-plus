#include <iostream>
#include <string>
using namespace std;
class Human
{
    public:
    string weight;
    int age;
    string name;

    void print()
    {
        cout << " imya " << name <<" ves " << weight << " vozrast " << age << endl;
    }
};

int main()
{

    Human I;
   I.age = 16;
   I.name = "Olya";
   I.weight = "N";

   cout << "*****************"<< endl;
   Human you;
   you.age = I.age;
   you.name = "you";
   you.weight = "L";

   I.print();
   you.print();

}
но
#include <iostream>
#include <string>
using namespace std;
class Human
{
    public:
    string weight;
    int age;
    string name;

    void print()
    {
        cout << " imya " << name <<" ves " << weight << " vozrast " << age << endl;
    }
};

int main()
{

    Human I;
   I.age = 16;
   I.name = "Olya";
   I.weight = "N";

   cout << "*****************"<< endl;

   I.print();

   Human you;
   you.print();
}
