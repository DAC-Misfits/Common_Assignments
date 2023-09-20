#include<iostream>
using namespace std;

//Program to print the first digit og the given number

int main()
{
    int n = -321;
    int temp = n;
    int summation = 0,product = 1;
    if(temp<0){
        temp*=-1;
    }
    while (temp!=0){
        int digit = temp%10;
        summation+=digit;
        product*=digit;
        temp/=10;
    }
    cout<<endl<<"Sum of digits: "<<summation;
    cout<<endl<<"Product of digits: "<<product<<endl;

    
    return 0;
}
