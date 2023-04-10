#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int i,n,f=0;
        cin >> n;
        int a[n+1];

        for(i=1; i<=n; i++)
        {
            cin >> a[i];
        }

        for(i=1; i<=n-2; i++)
        {
            if(a[i]%2==0 && a[i+2]%2 !=0)
            {
                f=1;
                break;
            }

            else if(a[i]%2!=0 && a[i+2]%2 ==0)
            {
                f=1;
                break;
            }
        }


        if(f==0) cout << "YES\n";
        else cout << "NO\n";
    }



    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,even=0,odd=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)even++;
            else odd++;
        }

        if(even==n || odd==n)cout<<"YES"<<endl;
        else
        {
            even=0,odd=0;
             for(i=0;i<n;i=i+2)
        {
            a[i]+=1;
        }

        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)even++;
            else odd++;
        }

        if(even==n || odd==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }





    }

    return 0;
}

*/
