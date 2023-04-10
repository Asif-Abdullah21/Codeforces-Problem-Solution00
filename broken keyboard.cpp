#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        int n,f=0,i;
        cin >> n;
        string str;
        cin >> str;


        if(n==1) cout <<"YES\n";
        else if(n==2) cout << "NO\n";


        else
        {
            for(i=1; i<n; i=i+3)
            {
                if(str[i] !=str[i+1])
                {
                    f=1;
                    break;
                }
            }

            if(f==0) cout <<"YES\n";
            else cout << "NO\n";
        }


    }

    return 0;
}

