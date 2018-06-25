#include<iostream>
using namespace std;
int main()
{
    char c;
    int uppercase,lowercase;
    cin>>c;
    lowercase=((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'));
    uppercase=((c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'));
    if(uppercase||lowercase)
    {
        cout<<"The character is vowel";
    }
    else
    {
        cout<<"The character is consonant";
    }
}
