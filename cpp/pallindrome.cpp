#include<iostream>
using namespace std ;
int main(){
    int n , sum =0;

cin>>n;
    int temp = n;
    

    while (n >0){
        int remainder = n %10;
        sum = (sum*10)+remainder;
        n = n/10;
    }if(temp==sum)
    cout<<"the number is palindrome";
    else
    cout<<"the number is not palindrome";

}