#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    // ODD numbers are not divisible by 2
    if(a%2!=0)
    cout<<"ODD NUMBER";
    else
    //  Even numbers are divisible by 2
    cout<<"EVEN NUMBER";
    return 0;
    
}