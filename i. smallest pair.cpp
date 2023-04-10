#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i,j,k;
    cin >> t;

    while(t--)
    {
        long long n,mini=10e18,ans=0;
        cin >> n;
        long long a[n+1];
        for(k=1;k<=n;k++) cin >> a[k];

        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                ans = a[i]+a[j]+j-i;

                if(ans<=mini) mini = ans;
            }
        }
       cout << mini << endl;

    }

    return 0;
}

