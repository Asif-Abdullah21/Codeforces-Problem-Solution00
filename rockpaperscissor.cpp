#include<bits/stdc++.h>
#define  endl  '\n'
#define  fastIO  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    ofstream cout ("hps.out");
    ifstream cin  ("hps.in");

    int n,h=0,p=0,s=0;
    cin >> n;
    char x;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x=='H') h++;
        else if(x=='P') p++;
        else s++;
    }

    int ans =0;

    int mx = max({h,p,s});

    int mn = min({h,p,s});

    cout << mx + (n-mn-mx);



    return 0;
}



