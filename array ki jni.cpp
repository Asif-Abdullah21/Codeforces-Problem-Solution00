#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll n,i;
    cin>>n;
    ll a[n+5],a1[n+5];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        a1[i]=a[i];
    }

    ll indx=0;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])indx=i;
    }
    ll indx1=max_element(a,a+n)-a;
    ll val=*max_element(a,a+n);

    ll x=0,x1=0,y=0,y1=0;


    for(i=indx+1; i<n; i++)
    {
        x+=a[i];
    }

    for(i=indx-1; i>=0; i--)
    {
        y+=a[i];
    }

     for(i=indx1+1; i<n; i++)
    {
        x1+=a[i];
    }

    for(i=indx1-1; i>=0; i--)
    {
        y1+=a[i];
    }

    if(x>y)
    {
        for(i=indx+1; i<n; i++)
        {
            a[i]=val;
        }
    }
    else if(x<y)
    {
        for(i=indx-1; i>=0; i--)
        {
            a[i]=val;
        }
    }

    if(x1>y1)
    {
        for(i=indx1+1; i<n; i++)
        {
            a1[i]=val;
        }
    }
    else
    {
        for(i=indx1-1; i>=0; i--)
        {
            a1[i]=val;
        }
    }

    ll sum=0,sum1=0;

    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }

    for(i=0; i<n; i++)
    {
        sum1+=a1[i];
    }

    cout<<max(sum,sum1)<<nl;

    return 0;
}


