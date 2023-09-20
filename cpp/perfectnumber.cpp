#include<iostream>
using namespace std;
int main(){
    int n , sum=0;
    int temp;
    cin>>n;

    for(int i =1; i<n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    cout<<sum;
    if(temp==sum){
        cout<<"the number is perfect number ";
    }else {
        cout<<"the number is not perfect number ";
    }
    }