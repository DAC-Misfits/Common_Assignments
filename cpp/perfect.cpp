#include<iostream>
using namespace std;

//Program to check the given number is perfect

int main()
{
    int n = 12;
    int temp = n;
    int summation = 0;
    for (int i = 1; i <= n/2; i++)
        {
            if (n%i == 0)
            summation+=i;
        }
    
    if (temp==summation)
        cout<<endl<<"It is perfect";
    else
        cout<<endl<<"Not";


    return 0;
}
