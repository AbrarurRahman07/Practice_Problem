#include<iostream>
using namespace std;
int main()
{
    int a,b,t=0;
    cin>>a>>b;
    while(b>=a)
    {
        a*=3;
        b*=2;
        t++;
    }
    cout<<t<<endl;
    return 0;
}
