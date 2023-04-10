#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,maxx,ans1,ans2;
    cin >> n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int max_i = max_element(a,a+n)-a;
    maxx = a[max_i];


    for(i=0;i<n;i++)
    {
        ans2=0;
        if(a[i]<0) a[i] = -1*a[i];
        if(maxx<0) a[i] = -1*a[i];
        int ans2 = a[i]+maxx;
        cout << ans2<< endl;
    }

    return 0;
}
