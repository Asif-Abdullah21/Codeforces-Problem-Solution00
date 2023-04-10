#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    sort(a,a+n);
    int maxx = 0,cnt=1;

    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1]){
            cnt=1;
        }

        else cnt++;

        if(cnt>maxx) maxx = cnt;
    }

    if(n==1) cout << 0 << endl;
    else cout << n-maxx << endl;

    return 0;
}
