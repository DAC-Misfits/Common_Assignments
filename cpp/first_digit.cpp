#include<iostream>
using namespace std;

//Program to print the first digit og the given number

int main()
{
    int n = 24245;
    while (n>10)
        n/=10;
    cout<<n<<endl;
    
    return 0;
}
