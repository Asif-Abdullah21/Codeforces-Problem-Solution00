#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    fastIO;  //abid vai

    int n,b,i;
    cin >> n >> b;
    int cnt=0;

    for(i=1;i<=n;i++)
    {
        if(b%i==0 && b/i<=n) cnt++;
    }

    cout << cnt << endl;


    return 0;
}

