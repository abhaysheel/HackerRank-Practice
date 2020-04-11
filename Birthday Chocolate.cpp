#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,d,m,sum=0,count=0;
    cin>>n;

    int *s=new int[n];

    for(int i=0;i<n;i++) cin>>s[i];

    cin>>d>>m;

    for(int i=0;i<n-m+1;i++) // check THIS
    {
        for(int j=i;j<m+i;j++)
        {
            sum += s[j];
        }
        if(sum==d) ++count;
        sum=0;
    }
    cout<<count;
    return 0;
}

