#include<iostream>
using namespace std;

//Program to check palindrome number

int main()
{
    int n = 1221;
    int temp = n;
    int reverse = 0;
    while (temp!=0){
        int digit = temp%10;
        reverse = (reverse*10)+digit;
        temp/=10;
    }
    if (reverse == n)
        cout<<endl<<"It is palindrome.";
    else 
        cout<<endl<<"Not";
    

    
    return 0;
}
