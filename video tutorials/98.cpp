#include <iostream>
using namespace std;
class Human
{
private:
string name = "ala";
public:
string Getname()
{
    return name;
}
    void SetName (string name)
    {
        this->name = name;
    }

};
class Student : public Human
 {
public:
    string group;
    void Learn()
    {
        cout << " I am learn!!!" << endl;
    }
};
class inogdaStudent : public Student
{
public:
    void Learn()
    {
        cout << " I am learn inogda!!!" << endl;
    }
};
class profesor : public Human
{
public:
     string subject;
};
int main ()
{
    Student st;
    st.Learn();
    st.SetName("JJJJJJJJ");
     cout << st.Getname() << endl;

    inogdaStudent is;
    is.Learn();
    is.SetName("kkkkkkkk");
    cout << is.Getname() << endl;

    profesor pr;
}