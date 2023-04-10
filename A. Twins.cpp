#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int a[n];
    int b[n+1];
    b[0] = 0;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        b[i+1] = b[i] + a[i];
    }

    int sum = a[n-1];
    int cnt=1;

    for(i=n-2;i>=0;i--)
    {
        if(sum<=b[i+1])
        {
            cnt++;
        }
        else break;
        sum += a[i];
    }

    cout << cnt << endl;

    return 0;
}
