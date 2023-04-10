#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    fastIO;

    int t;
    cin >> t;

    while(t--)
    {
        ll n,k;
        cin >> n >>k;

        if(n%2==0) cout << "YES\n"; // n odd hole k er sathe 0 gun diye , 2 er sathe iccha moto gun diye banay felbo
        else if(k%2!=0) cout << "YES\n";// ekhon n odd + k odd
        else cout << "NO\n";
    }

    return 0;
}


