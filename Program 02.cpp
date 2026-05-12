#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    optimize();
    char a[123];
    cin>>a;
    char b[123];
    strcpy(b,a);
    reverse(a,a+strlen(a));

    if(strcmp(a,b)==0)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}

