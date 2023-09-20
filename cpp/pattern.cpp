#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Enter the number of lines to print :";
    cin >>n;

// forward star pattern program
    for(int i= 0 ; i< n ; i++){
          for(int j = 0; j<i+1; j++){
            cout<<"*";
          }
          cout<<endl; 
    }
    cout<<endl<<endl;

    // backward star pattern program
    for(int i= 0 ; i< n ; i++){
          for(int j = 0; j<n-1-i; j++){
            cout<<" ";
          }
          for(int j = 0;j<i+1;j++){
            cout<<"*";
          }
          cout<<endl;
    }
    cout<<endl;

    // inverted star pattern program
    for(int i= 0 ; i< n ; i++){
          for(int j = n;j>i;j--){
            cout<<"*";
          }
          cout<<endl;
    }

    cout<<endl;


    // backward inverted star pattern program
    for(int i= 0 ; i< n ; i++){
          for(int j = 0; j<i; j++){
            cout<<" ";
          }
          for(int j = n;j>i;j--){
            cout<<"*";
          }
          cout<<endl;
    }

    cout<<endl;

    // triangle pattern program
    for(int i= 0 ; i< n ; i++){
          for(int j = 0; j<n-1-i; j++){
            cout<<" ";
          }
          for(int j = 0;j<i+1;j++){
            cout<<"*";
          }
          for(int j = 0;j<i;j++){
            cout<<"*";
          }
          cout<<endl;
    }

}