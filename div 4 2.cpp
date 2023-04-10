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
        ll n,even=0,odd=0;
        cin >> n;

        ll a[n+4];

        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]%2==0) even+=a[i];
            else odd+=a[i];

        }

        if(even>odd) cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }


    return 0;
}

