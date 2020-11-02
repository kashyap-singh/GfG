#include<bits/stdc++.h>
using namespace std;
/* Using sorting
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[0]<<" "<<a[n-1];
}*/
//Normal method
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int minimum=INT_MAX;
    int maximum=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]<minimum)
        {
            minimum=a[i];
        }
        if(a[i]>maximum)
        {
            maximum=a[i];
        }
    }
    cout<<minimum<<" "<<maximum;
}
