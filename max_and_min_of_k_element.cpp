#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n],j,k,mini,maxi;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cin>>mini>>maxi;
        sort(a,a+n);
        cout<<a[mini-1]<<" "<<a[maxi-1];
        cout<<endl;
    }
}
