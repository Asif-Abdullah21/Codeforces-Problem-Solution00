#include<bits/stdc++.h>
#define   nl         "\n"
#define   yy         "YES"
#define   nn         "NO"
#define   ss         " "
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t,n,x;
   int even,odd;

   cin>>t;

   while(t--)
   {
       ll a,b,c,ans1,ans2;
       cin>> a >> b >> c;

       ans1 = a-1;
       if(c>b) ans2 = (c-b)+c-1;
       else if(c<=b) ans2 = b-1;

       if(ans1<ans2) cout << 1 << endl;
       else if(ans1>ans2) cout << 2 << endl;
       else cout << 3 << endl;
   }


    return 0;
}
