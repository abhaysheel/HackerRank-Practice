#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) 
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(j>=i) cout<<" ";
            else cout<<"#";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    staircase(n);

    return 0;
}

