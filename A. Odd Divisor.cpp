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
         ll n,f=0;
         cin >> n;
         if(n%2 !=0) cout << "YES\n";
         else{
            while(n>0)
            {
                ll ans = n/2;
                if(ans%2!=0 && ans>1)
                {
                    f=1;
                    break;
                }
                n=n/2;
            }
            if(f==1) cout << "YES\n";
            else cout <<"NO\n";
         }
     }

     return 0;
}
