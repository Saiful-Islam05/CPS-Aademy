#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    int l=0,r=n-1,cnt=0;

    while(l<r)
    {
        if(a[l]+a[r]<=x)
        {
            l++;
            r--;
            cnt++;
        }
        else
        {
            r--;
            cnt++;
        }
    }

    if(l==r)
    {
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}

