#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        long long sum = 0;

        int a[n+5];
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int f=0;

        for(i=0; i<n-1; i++)
        {
            if(a[i]==-1 && a[i+1]==-1)
            {
                a[i] = 1;
                a[i+1] = 1;
                f=1;
                break;
            }

        }
        for(i=0; i<n-1; i++)
        {
            if(f==0)
            {
                if(a[i]==1 && a[i+1]==1)
                {
                    a[i] = -1;
                    a[i+1] = -1;
                }
            }

        }

        for(i=0; i<n; i++)
        {
            sum += a[i];
        }

        cout << sum << endl;
    }


    return 0;
}
