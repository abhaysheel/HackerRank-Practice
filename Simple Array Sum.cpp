#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,sum=0;
    cin>>n;
    int *arr= new int[n];  // for No faltu space USE THIS
    for(int i=0; i<n; i++) 
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout<<sum;
    return 0;
}


