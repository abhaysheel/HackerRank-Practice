#include <bits/stdc++.h>
// #define ll long long
using namespace std;


int main()
{
    int s,t,a,b,m,n;
    int ca=0,co=0;
    cin>>s>>t>>a>>b>>m>>n;
    int *app = new int[m];
    int *ora = new int[n];

    
    for(int i=0;i<m;i++)
    {
        cin>>app[i];
        if(app[i]<0) continue;
        if(app[i]>=s-a && app[i]<=t-a) ++ca;
    }
    for(int i=0;i<n;i++)
    {
        cin>>ora[i];

        if(ora[i]>0) continue;
        if(b+ora[i]<=t && b+ora[i]>=s) ++co;
    }

    cout<<ca<<endl<<co;
    return 0;
}


