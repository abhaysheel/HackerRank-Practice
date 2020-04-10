#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    float pos,neg,zero;
    cin>>n;

    int *ar = new int[n];
    for(int i=0; i<n ;i++)
    {
        cin>>ar[i];
        if (ar[i]>0) ++pos;
        else if (ar[i]<0) ++neg;
        else ++zero; 
    }
    cout<<pos/n<<endl;
    cout<<neg/n<<endl;
    cout<<zero/n;
    return 0;
}

