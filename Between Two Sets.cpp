#include <bits/stdc++.h>

using namespace std;

bool check_1(int *arr, int n , int k) 
{
    for(int i=0;i<n;i++)
    {
        if(k%arr[i]!=0)  return false;
    }
    return true;
}

bool check_2(int arr[], int n , int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]%k!=0) return false;
    }
    return true;
}

int main()
{ 
    int n,m,max=0,min=101;
    cin>>n>>m;
    int count=0;
    int *a = new int[n];
    int *b = new int[m];

    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        if(a[i]>max) max = a[i];
    }
    
    for(int i=0;i<m;i++) 
    {
        cin>>b[i];
        if(b[i]<min) min = b[i];
    }
    
    for(int i=max;i<=min;i++)
    {
        bool chk1=check_1(a,n,i);
        bool chk2=check_2(b, m, i);
        // cout<<i<<" "<<chk1<<" "<<chk2<<endl;
        if(chk1&&chk2)
        ++count;
    }
    cout<<count;
    
    return 0;
}


