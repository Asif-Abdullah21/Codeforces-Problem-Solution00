#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(i=0; i<n; i++) cin >> a[i];
        cin.ignore();
        string str;
        cin >>str;

        int f=0;

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    if(str[i] != str[j])
                    {
                        f=1;
                        break;
                    }
                }
            }

        }


        if(f==1) cout << "NO\n";
        else cout << "YES\n";

    }

    return 0;
}

