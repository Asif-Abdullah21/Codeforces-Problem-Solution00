#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;


int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,cnt=0,i=1,sum=0;
        cin >> n;


        for(i=1;i<=n;i++)
        {
            sum += i;
            if(sum<=n) cnt++;
            else break;

        }

        cout << cnt << endl;

    }

    return 0;
}

/*
///Problem A solution:
#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;


int main()
{
    int a,b;
    cin >> a >> b;

    if(a%b==0) cout << a/b<< endl;
    else cout << (a/b)+1<< endl;

    return 0;
}
///Problem B solution:

#include<bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;


int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,cnt=0,i=1,sum=1;
        cin >> n;

        while(i<=n)
        {
            if(sum<=n) cnt++;
            else break;

            sum = sum+(i+1);

            i++;
        }

        cout << cnt << endl;

    }

    return 0;
}

*/
