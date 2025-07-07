#include <iostream>
using namespace std;

class MyClass
{
    public:
        MyClass();
        ~MyClass();
        void PrintMessage()
        {
            cout << "hell" << endl;
        }

};


/*void MyClass::PrintMessage()
        {

        }
        */
int main()
{
    MyClass a;
    a.PrintMessage();
}