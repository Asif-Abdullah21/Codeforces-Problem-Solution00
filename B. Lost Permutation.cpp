#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;
    while(t--)
    {
        int n,s;
        cin >> n >> s;
        int a[n+5];
        int b[1005]= {0};
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            b[a[i]] = 1;
        }

        int maxx = *max_element(a,a+n);


        for(int i=1; i<=maxx; i++)
        {
            if(b[i]==0) s-=i;
        }

        int j=maxx+1;
        while(s>0)
        {
            s-=j;
            j++;
        }

        if(s==0) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}

