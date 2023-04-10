#define  ll long long
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ll t,i;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll b[n];

        for(i=0;i<n;i++) cin >> a[i];
        for(i=0;i<n;i++) cin >> b[i];

        ll min_a = *min_element(a,a+n);
        ll min_b = *min_element(b,b+n);

        ll cnt =0;

        for(i=0;i<n;i++)
        {
            if(a[i] != min_a && b[i] != min_b)
            {
                if((a[i]-min_a)>=(b[i]-min_b))
                     cnt+=(a[i]-min_a);
                else cnt+=(b[i]-min_b);
            }
            else{
                if(a[i]!=min_a && b[i]==min_b)
                {
                    cnt+=(a[i]-min_a);
                }
                else if(a[i]==min_a && b[i]!=min_b)
                {
                    cnt+=(b[i]-min_b);
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
