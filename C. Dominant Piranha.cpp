#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){
        int n, i, flag = 0, maxx, result;
        cin >> n;
        int a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n-1; i++){
            if(a[i] != a[i+1]){
                flag++;
            }
        }

        if(flag == 0) cout << -1 << endl;
        else{
            maxx = *max_element(a,a+n);

            for(i=0; i<n; i++){
                if((i+1<n) && (a[i] == maxx) && (a[i] > a[i+1])){
                    result = i+1;
                    break;
                }
                else if((i-1>=0) && (a[i] == maxx) && (a[i] > a[i-1])){
                    result = i+1;
                    break;
                }
            }

            cout << result << endl;
        }
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
    int t;
    cin >> t;

    while(t--)
    {
        ll i,n,f=0;
        cin >> n;
        ll a[n+5];

        for(i=1; i<=n; i++)
        {
            cin >> a[i];
        }
        for(i=1; i<=n-1; i++)
        {
            if(a[i]!=a[i+1]) f=1;
        }

        if(f==0) cout <<-1 <<endl;
        else
        {
            ll maxx = *max_element(a+1,a+n+1);
            for(ll i=1; i<=n-1; i++)
            {
                if(a[i]==maxx && a[i]>a[i+1])
                {
                    cout << i << endl;
                    f=2;
                    break;
                }
            }
            if(f==1)
            {
                for(ll i=n; i>=2; i--)
                {
                    if(a[i]==maxx && a[i]>a[i-1])
                    {
                        cout << i << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}

*/
