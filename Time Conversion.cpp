#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count=0;
    string str; 
    getline(cin,str);
    
    int time = 10*(int(str[0])-48)+int(str[1]-48);
    
    if(str[8]=='A'&& time==12)
    time=0;
    if(str[8]=='P')
    {
        time += 12;
        if(time==24) time = 12;
    }

    str[0]=char((time/10)+48);
    str[1]=char((time%10)+48);
    for(int i=0;i<str.size()-2;i++)
    cout<<str[i];
    return 0;
}

