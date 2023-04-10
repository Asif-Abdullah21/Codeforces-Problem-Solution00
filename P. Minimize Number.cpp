#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++) cin >> a[i];

    while(1)
    {
        int cnt=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0) cnt++;
            a[i] /= 2;
        }
        if(cnt==n) ans++;
        else break;
    }

    cout << ans << endl;
    return 0;
}
