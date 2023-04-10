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
    int a,b;
    cin >> a >> b;

    int ans =a,rem=0;

    while(a>=b)
    {
        ans += (a/b);
        rem = a%b;
        a = (a/b)+rem;
    }

    cout << ans << endl;


    return 0;
}
