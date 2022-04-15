#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    char opr;
    cout<<"pls enter the numbers"<<endl;
    cin>>n1>>n2;
    cout<<"which operation u want to do"<<endl;
    cin>>opr;
    switch(opr)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    default:
        cout<<"operation not found"<<endl;
        break;
    }
    return 0;
}
