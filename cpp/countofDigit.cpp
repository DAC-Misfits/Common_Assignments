#include<iostream>
using namespace std ;
int main(){

    int n , count =0 ;
    int result ;
    int check;


    cin>>n;
    cin>>check;

    while(n >0){
        result = n%10;

        if(result == check){
            count++;
        }
        n /=10;
    }
    cout<<check<<count;
    
} 