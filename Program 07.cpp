#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
bool isLeapYear(int y)
{
    return ((y%4==0&&y%100!=0)||y%400==0);
}
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int y,n;
        cin>>y>>n;
        int cnt=0;
        while(cnt<n)
        {
            if(isLeapYear(y))
            {
                cnt++;
                if(cnt==n)
                {
                    break;
                }
            }
            y++;
        }
        cout<<y<<endl;
    }
    return 0;
}

