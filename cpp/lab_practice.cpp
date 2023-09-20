#include <iostream>
using namespace std;

void f1(int a[])
{
    cout<<a[0]<<endl;
    cout<<*a<<endl;
}

int main()
{
    int arr[] = {1,2};
    f1(arr);
    return 0;
}
