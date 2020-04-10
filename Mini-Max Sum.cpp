#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll ar[5];
    ll max=0,min=0,sum=0;
    for(int i=0;i<5;i++) 
    {
        cin>>ar[i];
        if(i==0)
        {
            max = ar[i];
            min = ar[i];
        }
        if (ar[i]>max) max=ar[i];
        if (ar[i]<min) min=ar[i];
    }
    for(int i=0;i<5;i++)
    sum += ar[i];    
    cout<<sum-max<<" "<<sum-min;
    return 0;
}

