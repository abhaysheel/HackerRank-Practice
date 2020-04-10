#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    int max,min,ma=0,mi=0;
    cin>>n;
    int *a= new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if (i==0) 
        {
            max= a[i];
            min=a[i];
            continue;
        }
        if(a[i]>max) 
        {
            max = a[i];
            ++ma;
        }
        if(a[i]<min) 
        {
            min = a[i];
            ++mi;
        }
    
    }
    cout<<ma<<" "<<mi;
    return 0;
}

