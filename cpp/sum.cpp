#include<iostream>
using namespace std ;
int main(){

    int n , m ;
    int sum =0 ;

    cin>>n>>m;

    for (int i = n ;i <=m; i++ ){
        sum += i;
    }
    cout<<sum;
    int *p = &sum;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<&sum<<endl;
    cout<<++p<<endl;

    


}