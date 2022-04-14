#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    int counter;
    cout<<"enter the value of n\n";
    cin>>n;
    for(counter=1;counter<=n;counter++)
    {
        sum=sum+counter;
    }

    cout<<("sum of n natural numbers:")<<endl;
    cout<<sum<<endl;

    return 0;



}
