#include<bits/stdc++.h>
#define   endl         "\n"
#define   yes         "YES"
#define   no         "NO"
#define   ll         long long
#define   pii        pair<int,int>
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin >> a >> b >> c >> d;

        ll ans = 0;
        ll y=d-b;
        ans +=y;
        a +=y;

        if(c>a) cout << -1 << endl;
        else if(d<b) cout << -1 << endl;

        else
        {
            ans += (a-c);
            cout << ans << endl;
        }

    }

    return 0;
}



