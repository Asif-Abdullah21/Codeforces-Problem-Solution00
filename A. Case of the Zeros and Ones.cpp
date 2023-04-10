#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;


int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int cnt_0=0,cnt_1=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='0') cnt_0++;
        else cnt_1++;
    }

    cout << n-(min(cnt_0,cnt_1)*2);
    return 0;
}

