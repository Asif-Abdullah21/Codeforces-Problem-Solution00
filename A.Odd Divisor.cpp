#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;


int main()
{
     ll t;
     cin >> t;

     while(t--)
     {
         ll n;
         cin >> n;
         if(n%2 !=0) cout << "YES\n";
         else{
            for(ll i=3;i<=sqrt(n);i+=2)
            {
                if(n%i==0) cout <<"YES\n";
                break;
            }
            cout << "NO\n";
         }
     }

     return 0;
}
