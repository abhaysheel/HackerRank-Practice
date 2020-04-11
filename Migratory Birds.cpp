#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    int b[5] = {0,0,0,0,0};
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int x = a[i]-1;
        ++b[x];
    }
    int max = -1;

    for(int i=0;i<5;i++)
    {
        if(b[i]>max)
        {
            max = b[i];
            x=i;
        }
    }
    cout<<x+1;
    return 0;
}


