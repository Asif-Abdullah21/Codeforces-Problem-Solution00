#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;


int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,c,i,j;

        cin >> n >> c;
        ll a[n+5];
        ll d[n+5];
        pair<ll,ll> b[n+5];

        for(i=0; i<n; i++)
        {
            cin >> a[i];
            b[i].first=a[i];
            b[i].second=i+1;
        }

        ll cnt = 0;
        ll sum = 0;
        ll sum2 = 0;


        for(i=0; i<n; i++)
        {
            d[i] = b[i].first+b[i].second;
        }

        sort(d,d+n);

        for(i=0; i<n; i++)
        {
            sum2 += d[i];
            if(sum2<=c) cnt++;
            else break;
        }

        cout << cnt << endl;


    }

    return 0;
}
