#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;


    while(t--)
    {
        long long a,b,c,d,ans;
        cin >> a >> b >> c >> d;

        if(a==0)
        {
            if(b>0 || c>0 || d>0) cout << 1<< endl;
            else cout << 0 << endl;
        }
        else
        {
            ans += a;

            if(c<b) swap(c,b);

            ans = a+2*b;
            c=c-b;

            ans += min(a+1,c+d);//a holo alice r bob er ramaining mood

            cout << ans << endl;
        }
    }


    return 0;
}
