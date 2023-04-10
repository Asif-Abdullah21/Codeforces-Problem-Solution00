#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;

    while(t--)
    {
        ll n,q,i;
        cin >> n >> q;

        ll a[n+10];
        a[0] = 0;
        for(i=1;i<=n;i++)
        {
            cin >> a[i];

            a[i] = a[i-1] + a[i];
        }



        while(q--)
        {
            ll l,r,k,sum=0;
            cin >> l >> r >> k;

            ll diff = r-l+1;

            sum = a[l-1] + (diff*k)+(a[n]-a[r]);

            if(sum%2==0) cout << "NO"<< endl;
            else cout << "YES"<< endl;

        }


    }


    return 0;
}


