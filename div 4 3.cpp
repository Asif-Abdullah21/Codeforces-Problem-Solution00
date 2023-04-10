#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;

    while(t--)
    {
        int n,f=0;
        cin >> n;

        string s;
        cin >> s;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(s[i]==s[j])
                {
                    if(i%2==0 && j%2 !=0)
                    {
                        f=1;
                        break;
                    }
                    else if(i%2!=0 && j%2 ==0)
                    {
                        f=1;
                        break;
                    }
                }
            }
        }


        if(f==0) cout << "YES"<< endl;
        else cout << "NO"<< endl;


    }


    return 0;
}


