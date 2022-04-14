#include <iostream>
using namespace std;
int main()
{
    int N;
    int i;
    cout<<"pls enter what multiplication table u want to see"<<endl;
    cin>>N;
    cout<<"pls enter how many steps you want to see in the table"<<endl;
    cin>>i;
    for(int temp=1;temp<=i;temp++)
    {
        cout<<N<<"*"<<temp<<"="<<N*temp<<endl;
    }
    return 0;
}
