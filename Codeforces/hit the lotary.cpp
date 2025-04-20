#include<iostream>
using namespace std;
int main()
{
    long long int n,count=0;
    cin>>n;
    int arr[]= {100,20,10,5,1};
    while(n!=0)
    {
        if(n>=100)
        {
            n-=100;
            count++;
        }
        else if(n<100 && n>=20)
        {
            n-=20;
            count++;
        }
        else if(n<20 && n>=10)
        {
            n-=10;
            count++;
        }
        else if(n<10 && n>=5)
        {
            n-=5;
            count++;
        }
        else if(n<5 && n>=1)
        {
            n-=1;
            count++;
        }
    }
    cout<<count<<endl;
}
