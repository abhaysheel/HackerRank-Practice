#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,k,count=0;
    cin>>n>>k;

    int *ar = new int[n];

    for(int i=0;i<n;i++)    cin>>ar[i];
    
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
            if (i==j) continue;
            if((ar[i]+ar[j])%k==0) ++count;
        }
    }
    cout<<count;
    return 0;
}

