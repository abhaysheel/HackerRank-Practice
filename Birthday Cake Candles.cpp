#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int n,max,count=0;
    cin>>n;
    ll *ar = new ll[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i==0) max=ar[i];
        if(max<ar[i]) max=ar[i];
    }

    for(int i=0;i<n;i++)
    {
        if(ar[i]==max) ++count;
    }

    cout<<count;
    return 0;
}


