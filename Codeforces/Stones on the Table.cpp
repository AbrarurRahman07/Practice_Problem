#include<iostream>
using namespace std;
int main()
{
    int n,num=0;
    cin>>n;
    char s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
            num++;
    }
    cout<<num<<endl;
}
