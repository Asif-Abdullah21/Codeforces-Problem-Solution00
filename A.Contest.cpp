#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
fio;
ll a,b,c,d;
cin >> a >> b >> c >> d;
ll misha = max((3*a)/10,a-(a/250)*c);
ll vasya = max((3*b)/10,b-(b/250)*d);

if(misha>vasya) cout << "Misha\n";
else if(vasya>misha) cout << "Vasya\n";
else cout << "Tie\n";

return 0;
}