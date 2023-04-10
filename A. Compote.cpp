#include<bits/stdc++.h>
#define   nl         "\n"
#define   yes         "YES"
#define   no         "NO"
#define   ll         long long
#define   pii        pair<int,int>
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll a,b,c;
    cin >> a >> b >>c;// tutorial

    ll cnt = min({a,(b/2),(c/4)});

   // ll ans = (cnt*1)+(cnt*2)+(cnt*4);


   cout << cnt*7<< endl;
   // cout << ans << endl;


    return 0;
}





/*
#include<bits/stdc++.h>
#define   nl         "\n"
#define   yes         "YES"
#define   no         "NO"
#define   ll         long long
#define   pii        pair<int,int>
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll a,b,c;
    cin >> a >> b >>c;

    ll x=1,cnt=0;

    for(ll i=1;i<=1000;i++)
    {
        if(x<=a && x*2<=b && x*4<=c) cnt++;
        else break;

        x++;
    }

    ll ans = (cnt*1)+(cnt*2)+(cnt*4);


    cout << ans << endl;



    return 0;
}




 */
