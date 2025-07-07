#include <iostream>

using namespace std;

   void recurtion (int a)
   {
       if (a==1)
       return;
       cout<<a<<" ";
       recurtion(a-1);
       cout<<a<<" ";
   }

int main()
{
    recurtion(10);
}
