#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int gcd(int a,int b) {return __gcd(a,b);}
int lcm(int a,int b) {return a*(b/gcd(a,b));}
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        int ans=1;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            ans=lcm(a,ans);

        }
        cout<<ans<<endl;
    }

    return 0;
}

