#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s;
    cin>>s;
    int cnt=1,curr=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            curr++;
        }
        else
        {
            if(curr>cnt)
            {
                cnt=curr;
            }
            else
            {
                cnt=cnt;
            }

            curr=1;
        }
    }

    if(curr>cnt)
    {
        cnt=curr;
    }
    else
    {
        cnt=cnt;
    }

    cout<<cnt<<endl;

    return 0;
}

