#include<iostream>
using namespace std;
int main()
{
    int n,k,m=0;
    int a[100];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if((a[i]>=a[k]) && (a[i]>0))
        {
            m++;
        }
    }
    cout<<m<<endl;
}
