#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll num;
        cin >> num;
        while (1)
        {
            if (num % 2020 == 0)
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                num -= 2021;
                if (num == 0)
                {
                    cout << "YES" << endl;
                    break;
                }
                else if (num < 2020)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
        }
    }
}
/*
#include<bits/stdc++.h>
#define ll  long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        if(n%2020==0) cout << "YES\n";
        else
        {
            while(1)
            {
                n-=2021;
                if(n==0)
                {
                    cout << "YES\n";
                    break;
                }
                if(n<2020)
                {
                    cout << "No\n";
                    break;
                }
                if(n%2020==0)
                {
                    cout << "YES\n";
                    break;
                }

            }
        }
    }

    return 0;
}


 */
