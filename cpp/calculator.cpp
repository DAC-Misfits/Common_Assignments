#include <iostream>
using namespace std;

int main(){
    int no1,no2;
    char ch;
    while (true)
    {
        char check ;
        cout<<endl<<"Enter the numbers: ";
        cin>>no1>>no2;
        cout<<"Enter operation: ";
        cin>>ch;
        switch (ch)
        {
        case '+':
            cout<<endl<<"The sum is: "<<no1+no2;
            break;
        case '-':
            cout<<endl<<"The difference is: "<<no1-no2;
            break;
        case '/':
            cout<<endl<<"The division is: "<<no1/no2;
            break;
        case '*':
            cout<<endl<<"The product is: "<<no1*no2;
            break;
        
        default:
            cout<<"invalid";
            break;
        }
        cout<<endl<<"Another one? Y/N: ";
        cin>>check;
            if (check == 'N')
            {
                exit(0);
            }
    }
       


    return 0;
}