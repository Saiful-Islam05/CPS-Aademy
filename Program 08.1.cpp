#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string a,b;
    cin>>a>>b;
    int n=a.length()-1;
    int m=b.length()-1;

    while(n>=0&&m>=0)
    {
        int da=a[n]-'0';
        int db = b[m]-'0';

        if(da+db>9)
        {
            cout<<"Hard"<<endl;
            return 0;
        }

        n--,m--;
    }
    cout<<"Easy"<<endl;

    return 0;
}

