#include <iostream>
using namespace std;
int main()
{
    char l;
    cout<<"pls enter the alphabet"<<endl;
    cin>>l;
    l=tolower(l);
    if (l=='a' || l=='u' || l=='o' || l=='i' || l=='e')
        cout<<"it is vowel"<<endl;
    else
        cout<<"it is consonant"<<endl;
}
