#include<iostream>
using namespace std ;
int main(){
    int n , sum=0;
    int remainder ;
    cin >>n ;

    while (n>0){
        remainder = n %10;
        sum = (sum*10)+remainder;
        n = n/10;
    }
    cout<< sum;
    
    }
