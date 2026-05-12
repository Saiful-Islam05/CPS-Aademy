#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt+1<<endl;

    return 0;
}

