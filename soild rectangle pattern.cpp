#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"pls enter the no of rows"<<endl;
    cin>>r;
    cout<<"pls enter the no of coloums"<<endl;
    cin>>c;
    for(int i=1;i<=r;1i++){
        for(int j=1;j<=c;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
