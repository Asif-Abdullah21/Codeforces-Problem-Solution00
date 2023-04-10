#include<bits/stdc++.h>
#define  endl  '\n'
#define  fastIO  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test, i; // muhammad_sayem
    cin >> test;

    while(test--){
        long long a, b, c, d, val1, val2;
        cin >> a >> b >> c >> d;

        val1 = a*d;
        val2 = b*c;

        if(val1 == val2) cout << 0 << endl;
        else if(val1 == 0 || val2 == 0) cout << 1 << endl;
        else if((val1%val2 == 0) || (val2%val1 == 0)) cout << 1 << endl;
        else cout << 2 << endl;

    }

    return 0;
}




/*
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a,b,c,d,aa,bb;
        ll ans1=0,ans2=0;
        cin >> a >> b >> c >> d;

        ans1 = a*d;
        ans2 = b*c;
        ll mx = max(ans1,ans2);
        ll mn = min(ans1,ans2);

        if(ans1==ans2) cout << 0 << endl;
        else if(ans1 ==0 || ans2==0) cout << 1 << endl;
        else if(mx%mn==0) cout << 1 << endl;
        else cout << 2 << endl;

    }

    return 0;
}

 */
