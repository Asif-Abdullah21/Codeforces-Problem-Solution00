#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        int n,cnt=0;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]==2) cnt++;
        }


        if(cnt==0) cout << 1 << endl;
        else if(cnt%2!=0) cout << -1<< endl;
        else if(cnt%2==0)
        {
            int cnt_2=0,ans=0;

            for(int i=0; i<n; i++)
            {
                if(a[i]==2) cnt_2++;
                ans = i+1;

                if(cnt_2==cnt/2)
                {
                    cout << ans << endl;
                    break;
                }
            }
        }


    }

    return 0;
}

