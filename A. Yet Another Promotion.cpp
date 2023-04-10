#include<bits/stdc++.h>
#define ll  long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a,b,n,m;
        cin >> a >> b;
        cin >> n >> m;
        ll ans = 0;
        ll rem_n=0;

        if(m<=n)
        {
            ll b_takay_m_1= b*(m+1);
            ll a_takay_m_1= a*m;

            if(a_takay_m_1<=b_takay_m_1)
            {
                ans += (m*a);
            }
            else
            {
                ans = ans +(b*(m+1));
            }

             rem_n = n-(m+1);
        }


        if(a<=b)
        {
            ans += (rem_n*a);
        }
        else ans += (rem_n*b);

        cout << ans << endl;
    }

    return 0;
}
