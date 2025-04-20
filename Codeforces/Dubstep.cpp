#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            if(count!=0)
            {
                t+=" ";
                count=0;
            }
            i=i+2;
        }
        else
        {
            t+=s[i];
            count++;
        }
    }
    cout<<t<<endl;
}
