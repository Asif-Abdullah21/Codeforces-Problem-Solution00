#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,x,ans=1;
        cin >> n>>x;

        if(n<3) cout << 1 << endl;
        else{
            n=n-2;
            if(n<=x) cout << ans+1<<endl;
            else{
                if(n%x==0) ans += (n/x);
                else ans += (n/x)+1;

                cout << ans << endl;
            }
        }
    }

    return 0;
}
