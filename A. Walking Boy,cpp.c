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
int t;
cin >> t;

while(t--)
{
    int n;
    cin >> n;
    int ans = 9;

    if(n<10) cout << n << endl;
    else{
        int digit = floor(log10(n)+1);
        cout << digit << endl;

        cout << ans << endl;
    }
}
    return 0;
}

