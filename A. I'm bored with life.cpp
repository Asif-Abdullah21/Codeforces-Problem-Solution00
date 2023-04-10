#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
    fio;

    ll a,b;
    cin >> a >> b;

    ll ans = 1;

    for(int i=2;i<=min(a,b);i++)
    {
        ans *= i;
    }

    cout << ans << endl;


    return 0;
}


