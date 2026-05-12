#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,m,index=0,cnt=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxi=0;
    for(int i=0;i<n;i++)
    {
       cnt=ceil(a[i]/m);
       if(cnt>maxi)
       {
           maxi=cnt;
           cnt=0;
           index=i;
       }

    }

    cout<<index+1<<endl;

    return 0;
}


