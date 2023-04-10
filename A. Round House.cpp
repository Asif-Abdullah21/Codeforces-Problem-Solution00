#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main()
{
    int n,a,b,ans=0;
    cin >> n >> a >> b;

    ans = a;

    if(b>0)
    {
        for(int i=0;i<b;i++)//3 4 7 ///i==1 2
        {
             ans++;
             if(ans>n) ans =1;
        }

        cout << ans << endl;
    }
    else{
        for(int i=0;i<abs(b);i++)
        {
             ans--;
             if(ans<1) ans = n;
        }

        cout << ans << endl;
    }

    return 0;
}

/*
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main()
{
    int n,a,b,ans=0;
    cin >> n >> a >> b;

    if(b<0)
    {
        b=abs(b);
        ans = n-(b-a);
        if(n==0) cout << n<< endl;
        else cout << abs(ans) << endl;
    }
    else
    {

    }

    return 0;
}


 */
