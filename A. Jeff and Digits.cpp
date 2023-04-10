#include<bits/stdc++.h>
#define   endl   '\n'
#define  fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int n, i, cnt0 = 0, cnt5 = 0;
    cin >> n;
    int a[n+5];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] == 0) cnt0++;
        else if(a[i] == 5) cnt5++;
    }

    if(cnt0 == 0) cout << -1 << endl;
    else if(cnt5<9) cout << 0 << endl;

    else
    {
        int value = cnt5/9;

        for(i=1; i<=9*value; i++)
        {
            cout << 5;
        }
        for(i=1; i<=cnt0; i++)
        {
            cout << 0;
        }
    }

    return 0;
}
