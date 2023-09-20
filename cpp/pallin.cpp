#include<iostream>
using namespace std;

int main()
{
    int n,arr[10],temp;
    cin>>n;
    temp=n;
    for(int i=0;i<10;i++){
     if(n==0){
     break;}
     arr[i]=n%10;
     n=n/10;
     arr[i+1]='\0';
    }
    int num=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        num=num*10+arr[i];
    }
return num==temp;

    return 0;
}
