#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll a ,b,c;
        cin >> a >> b >> c;

        if((a+c)%(2*b)==0) cout << "YES\n";
        else if((2*b-c)%a==0 && 2*b-c>0) cout <<"YES\n";
        else if((2*b-a)%c==0 && 2*b-a>0) cout <<"YES\n";
        else cout <<"NO"<<endl;
    }

    return 0;
}
