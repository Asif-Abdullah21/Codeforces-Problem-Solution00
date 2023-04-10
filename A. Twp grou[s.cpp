#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        long long n,s1=0,s2=0;
        cin >> n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]>0) s1+=a[i];
            else s2 += a[i];
        }

        long long ans = s1-abs(s2);
        cout << abs(ans) << endl;


    }

    return 0;
}
