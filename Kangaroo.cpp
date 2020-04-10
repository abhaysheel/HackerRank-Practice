#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1,v1,x2,v2;
    float n;
    cin>>x1>>v1>>x2>>v2;
   
    if(v1==v2) cout<<"NO";
    else if(v1>v2)
    {
        n = (float(x2-x1))/(float(v1-v2));
        
        float a = float(n - int(n));
        
        if(a==0.00) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";
    
    return 0;
}

