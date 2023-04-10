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
        int x,y;
        cin >> x >> y;

        x = abs(x);
        y = abs(y);

        int minn = min(x,y);
        int ans;
        ans = (2*minn)+2*(abs(x-y))-1;

        if(x==y)
        {
            cout << x+y<< endl;
        }

        else cout << ans << endl;
    }

    return 0;
}
/*
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
        int x,y;
        cin >> x >> y;

        x = abs(x);
        y = abs(y);

        int minn = min(x,y);
        int ans;
        ans = (2*minn)+2*(abs(x-y))-1;

        if(x==y) cout << ans+1 << endl;
        else cout << ans << endl;
    }

    return 0;
}

 */
