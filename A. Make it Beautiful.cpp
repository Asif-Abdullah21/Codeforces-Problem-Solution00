#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++) cin >> a[i];

        sort(a,a+n,greater<int>());

        int cnt_max = 1;
        int maxx = a[0];

        for(i=1;i<n;i++)
        {
            if(a[i]==maxx) cnt_max++;
            else break;
        }

        if(cnt_max==n) cout << "NO\n";
        else{
            cout << "YES\n";
            for(i=cnt_max-1;i<n;i++) cout << a[i] << ' ';
            //for(i=cnt_max-2;i>=0;i--) cout << a[i] << " ";
            for(i=0;i<cnt_max-1;i++)cout<<a[i]<<' ';
            cout << endl;

        }

    }
}


/*
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++) cin >> a[i];

        sort(a,a+n,cmp);

        int cnt_max = 1;
        int maxx = a[0];

        for(i=1;i<n;i++)
        {
            if(a[i]==maxx) cnt_max++;
            else break;
        }

        if(cnt_max==n) cout << "NO\n";
        else{
            cout << "YES\n";
            for(i=cnt_max-1;i<n;i++) cout << a[i] << ' ';
            for(i=0;i<cnt_max-1;i++)cout<<a[i]<<' ';
            cout << endl;

        }

    }
}

 */
