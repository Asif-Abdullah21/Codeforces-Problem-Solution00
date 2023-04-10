#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;


/*
int gcd(int n1,int n2)
{
    int rem;

    while(n2 !=0)
    {
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }

    return n1;
}

*/


int main()
{
    fio;

    int t;
    cin >> t;

    while(t--)
    {
        int n,f=0;
        cin >> n;

        int a[n+5];

        for(int i=0;i<n;i++) cin >> a[i];

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(a[i],a[j])<=2)
                {
                    f=1;
                    break;
                }
            }
        }

        if(f==1) cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }

    return 0;
}
