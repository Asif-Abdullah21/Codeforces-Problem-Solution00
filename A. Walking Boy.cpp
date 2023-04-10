#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n+5];

        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        sort(a,a+n,greater<int>());

        if(1440-a[0]>=240) cout << "YES"<< endl;
        else if(a[n-1]-0>=240) cout << "YES"<< endl;
        else{
            int f=0;
            for(int i=1;i<n;i++)
            {
                if(a[i-1]-a[i]>=240)
                {
                    f=2;
                    break;
                }
                else if(a[i-1]-a[i]>=120)
                {
                    f++;
                }
            }

            if(f>=2) cout << "YES"<< endl;
            else cout << "NO"<< endl;
        }

    }


    return 0;
}
