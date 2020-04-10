#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int *a = new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<38)
        {
        cout<<a[i]<<endl;
        continue;
        }
        int x = 5*(a[i]/5)+5;
        // cout<<x<<endl;
        if(x-a[i]<3)
        cout<<x<<endl;
        else cout<<a[i]<<endl;
    }
    return 0;
}

