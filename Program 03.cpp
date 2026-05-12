#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    string s1,s2;
    cin>>s1;
    s2=s1;
    reverse(s2.begin(),s2.end());

    if(s1==s2)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not palindrome"<<endl;
    }

    return 0;
}

