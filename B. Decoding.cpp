#include<bits/stdc++.h>
#define   nl         "\n"
#define   yy         "YES"
#define   nn         "NO"
#define   ll         long long
#define   pii        pair<int,int>
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll n;
    cin >> n;
    string str;
    cin >> str;

    if(n%2 !=0)
    {
        for(int i=n-2;i>=0;i-=2) cout << str[i];

        for(int i=0;i<n;i+=2) cout << str[i];
    }
    else{
        for(int i=n-2;i>=0;i-=2) cout << str[i];

        for(int i=1;i<n;i+=2) cout << str[i];
    }



    return 0;
}


