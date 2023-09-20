#include<iostream>
using namespace std ;
int main (){
    int n ;
    int resut;
    cin>>n;

    for(int i =1 ; i<= n; i++){
        if(n %i==0)
        cout<<i<<" ";
    }if(n<1){
        cout<<"invalid input ";
    }
}
