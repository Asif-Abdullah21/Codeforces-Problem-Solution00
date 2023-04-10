#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    fastIO;

    int f=0;
    string s;
    cin >> s;

    if(s[0]!='1') f=1;
    else if(s[1]!='1' && s[1] !='4' && s.size()==2) f=1;
    else
    {
        for(ll i=2; i<s.size(); i++)
        {
            if(s[i] !='4' && s[i] !='1')
            {
                f=1;
                break;
            }
            else if(s[i]=='4' && s[i-1]=='4' && s[i-2] =='4')
            {
                f=1;
                break;
            }
        }
    }


    if(f==0) cout << "YES\n";
    else cout <<"NO\n";

    return 0;
}

