#include<iostream>
using namespace std;
int main()
{
    string s;
    bool b=true;
    int num=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
            num++;

    }
    if(num==4|| num==7)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;

}
