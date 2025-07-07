#include <iostream>

using namespace std;
int f(int *arr, int size)
{

      static int sum;

         if (size == 0)
         {
             return 0;
         }
         sum += arr[size-1];
         f(arr, size - 1);
          return sum;


}

int main()
{
int arr[4]{8, 2, 3, 5};
cout<<f(arr, 4)<<" ";
}
