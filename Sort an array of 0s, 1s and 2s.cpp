#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n],j,c0=0,c1=0,c2=0;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]==0)
            {
                c0++;
            }
            else if(a[j]==1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        //cout<<c0<<" "<<c1<<" "<<c2<<endl;
        for(j=0;j<c0;j++)
        {
            a[j]=0;
        }
        for(j=c0;j<c1+c0;j++)
        {
            a[j]=1;
        }
        for(j=c1+c0;j<c2+c1+c0;j++)
        {
            a[j]=2;
        }
        for(j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}
