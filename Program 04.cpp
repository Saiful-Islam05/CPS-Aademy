#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
const int mx=1e6+123;
char s[mx];
int main()
{
    optimize();
    cin>>s;
    int cnt=1;
    int ans=1;
    int len=strlen(s);

    for(int i=1;i<len;i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
        }
        else
        {
            ans=max(ans,cnt);
            cnt=1;
        }
    }

    ans=max(ans,cnt);

    cout<<ans<<endl;

    return 0;
}

