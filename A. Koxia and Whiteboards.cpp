#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,i,j;
    cin >> test;
    while(test--)
    {
        int n1,n2,b;
        cin >> n1 >> n2;
        int a[n1];

        for(i=0;i<n1;i++)
        {
            cin >> a[i];
        }

        for(j=0;j<n2;j++)
        {
            cin >> b;

            int minn = a[0];
            int min_index=0;

            for(i=1;i<n1;i++)
            {
                if(a[i]<minn)
                {
                    minn = a[i];
                    min_index = i;
                }
            }

            a[min_index] = b;
        }

        long long sum = 0;
        for(i=0;i<n1;i++)
        {
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}


/*
#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    fastIO;

    int t,n,m;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        int ar[n],x;

        for(int i=0;i<n;i++)cin>>ar[i];

        for(int i=0;i<m;i++)
        {
            cin>>x;

            int mn=ar[0];
            int index=0;

            for(int j=1;j<n;j++)
            {
                if(ar[j]<mn)
                {
                    mn=ar[j];
                    index=j;
                }
            }

            ar[index]=x;

        }

        ll ans=0;

        for(int i=0;i<n;i++)ans+=ar[i];

        cout<<ans<<endl;
    }
    return 0;
}
 */
