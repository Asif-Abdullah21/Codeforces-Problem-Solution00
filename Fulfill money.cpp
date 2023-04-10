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
        cin >> n;

        int a[10];

        for(int i=0;i<6;i++)
        {
            a[i] = i+1;
        }

        ll sum =0,cnt=0;

        for(int i=0;i<6;i++)
        {
            sum = a[i];
            for(int j=i;j<6;j++)
            {
                sum = sum + a[j];
                if(sum==n) cnt++;
            }
        }

        cout << cnt << endl;


    return 0;
}

