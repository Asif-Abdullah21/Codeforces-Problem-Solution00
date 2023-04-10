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
    int n,m;
    cin >> n >> m;

    if(n<m) cout << -1 << endl;
    else if((n/2)%m==0 && n%2==0) cout << n/2 << endl;
    else{
        int x = (n/2)+1,ans=-1;

        while(x<=n)
        {
            if(x%m==0)
            {
                ans = x;
                break;
            }

            x++;
        }

        cout << ans << endl;
    }


    return 0;
}

