#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum_lr=0,sum_rl=0;
    cin>>n;

    // int **ar = new int*[n]; 
    // for (int i=0; i<n;i++) ar[i] = new int[n];
    int ar[100][100];
    for (int i=0; i<n;i++)
    {
        for (int j=0;j<n;j++)
        cin>>ar[i][j];
    }

    for(int i=0; i<n;i++)
    {
        sum_lr += ar[i][i];
    }

    for(int i=0,j=n-1; i<n;i++,j--)
    {
        sum_rl += ar[i][j];
        // cout<<"srl: "<<sum_rl<<endl;
    }
    // cout<<sum_lr<<" "<<sum_rl<<endl;
    if (sum_lr-sum_rl < 0)
    cout<<sum_rl-sum_lr;
    else cout<<sum_lr-sum_rl;
    
    return 0;
}


