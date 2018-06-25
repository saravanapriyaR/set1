#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        cout<<"The character is alphabet";
    }
    else
    {
        cout<<"The character is not alphabet";
    }
}
