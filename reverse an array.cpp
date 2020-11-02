#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<(n/2);i++)
    {
        temp=a[n-i-1];
        a[n-i-1]=a[i];
        a[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
