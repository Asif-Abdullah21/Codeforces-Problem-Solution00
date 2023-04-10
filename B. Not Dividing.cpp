#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n+4];

        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]==1) a[i]++;
        }

        cout << a[0]<< " ";

        for(ll i=1;i<n;i++)
        {
            while(a[i]%a[i-1]==0)
            {
                a[i]++;
            }
            cout << a[i]<< " ";
        }

        cout << endl;
    }

    return 0;
}



