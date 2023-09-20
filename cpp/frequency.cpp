#include<iostream>
using namespace std;

int main(){
    int no = 1234361;
    int frequency[10] = {0};
    int getArrayLength = sizeof(frequency) / sizeof(int);
    //cout<<getArrayLength;


    

    while (no!=0)
    {
        int digit = no%10;
        frequency[digit]++;
        no = no/10;
    }

    

    for (int i = 0; i < getArrayLength; i++)
    {
        if(frequency[i]!=0){
            cout<<"Digit: "<<i<<" Frequency: "<<frequency[i]<<endl;
        }
    }
    
    
}