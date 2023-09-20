#include<iostream>
using namespace std ;
int main(){
    int n, remainder,sum=0,temp;

    cin>>n;
    temp =n;
  

    while (n>0){
        remainder = n%10;
        sum += remainder*remainder*remainder;
        n =n /10;

    }if(temp==sum){
        cout<<"the number is armstrong";
    }else{
        cout<<"the number is not armstrong";
    }
}