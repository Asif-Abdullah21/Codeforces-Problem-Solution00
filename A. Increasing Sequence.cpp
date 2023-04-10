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
    ll n,d;
    cin >> n >> d;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin >> a[i];

    ll cnt=0,val=0;

    for(ll i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1]) continue;
        else
        {
            ll diff = a[i]-a[i+1];
            if(diff<d)
            {
                a[i+1] += d;
                cnt++;
            }
            else{
                val = (diff/d)+1;
                a[i+1] += (val*d);
                cnt += val;
            }
        }
    }

    cout << cnt << endl;



    return 0;
}

/*

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
    ll n,b;
    cin >> n >> b;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin >> a[i];

    ll cnt=0;

    for(ll i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1]) continue;
        else
        {
            while(a[i+1]<=a[i])
            {
                a[i+1] += b;
                cnt++;
            }
        }
    }

    cout << cnt << endl;



    return 0;
}


 */
