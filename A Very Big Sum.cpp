#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,sum=0;
    cin>>n;
    ll *ar = new ll[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        sum += ar[i];
    }
    cout<<sum;
    return 0;
}

