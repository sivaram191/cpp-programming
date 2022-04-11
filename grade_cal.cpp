#include <iostream>
using namespace std;
float marks;
int main()
{
        cout<<"pls enter the marks obtained"<<endl;
        cin>> marks;
        if (marks<=100 & marks>90)
            cout<<"your grade is A+"<<endl;
        else if (marks<=90 & marks>80)
            cout<<"your grade is A"<<endl;
        else if (marks<=80 & marks>70)
            cout<<"your grade is B"<<endl;
        else if (marks<=70 & marks>=60)
           cout<<"your grade is C"<<endl;
        else if (marks<60 & marks>=0)
           cout<<"sorry you failed"<<endl;
        else
           cout<<"invaild marks"<<endl;
}
