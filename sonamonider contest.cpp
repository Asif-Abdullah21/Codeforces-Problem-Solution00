#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{

        ll n;
        ll ans =0;
        cin >> n;
        ll a[n+9];
        ll mx1=0,mx_i1=1;
        ll mx2=0,mx_i2=1;

        for(ll i=1;i<=n;i++)
            {
                cin >> a[i];
                if(a[i]>mx1)
                {
                    mx1 = a[i];
                    mx_i1 = i;
                }
                if(a[i]>=mx2)
                {
                    mx2 = a[i];
                    mx_i2 = i;
                }
            }

        ll sum1 = 0,cnt1=0;
        ll sum2 = 0,cnt2=0;

        for(ll i=1;i<mx_i;i++)
        {
            sum1 += a[i];
            cnt1++;
        }
        for(ll i=mx_i+1;i<=n;i++)
        {
             sum2 += a[i];
             cnt2++;
        }

        if(mx_i-1>n-mx_i) ans = (cnt1*a[mx_i]) +a[mx_i]+ sum2;
        else if(mx_i-1<n-mx_i) ans = (cnt2*a[mx_i]) + a[mx_i] + sum1;
        else
        {
            if(sum1<sum2)
            {
                ans = (cnt1*a[mx_i]) +a[mx_i]+ sum2;
            }
        }

        cout << ans << endl;


    return 0;
}

