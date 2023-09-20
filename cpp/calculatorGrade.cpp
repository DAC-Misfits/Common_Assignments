#include<iostream>
using namespace std;
int main(){
    int num;
    string name;
    int m1,m2,m3;
    int average ;

    cout<<"enter number of student";
    cin>>num;

    for(int i = 0 ; i<num ; i++){
        cout<< " ENTER";
        cin>>name ;
        cin>>m1>>m2>>m3;
        average = (m1+m2+m3)/3;
        
        cout<<name<<""<<average;

   

        if(average>= 90){
            cout<<"grade A";
        }
        else if(average>=80){
            cout<<"grade b";
        }
         else if(average>=70){
            cout<<"grade C";
        }
         else if(average>= 60){
            cout<<"grade D";
        }
        else 
        cout << "Fail";

       

    }
}