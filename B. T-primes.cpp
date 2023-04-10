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
     ll limit = 1e6;//10^12 er sqr root
     ll seive[limit+5] = {0};
     // memset(seive,0,sizeof(seive));

     for(ll i=2;i<=limit;i++)
     {
        if(seive[i]==0)
        {
            for(ll j=i+i;j<=limit;j+=i)
            {
                seive[j]=1;
            }
        }
     }

     while(t--)
     {
         ll n;
         cin >> n;
         ll value1 = sqrt(n);


         if(n<4) cout << "NO\n";
         else if(seive[value1]==0 && value1*value1==n) cout << "YES\n";
         else cout << "NO\n";
     }


     return 0;
}

