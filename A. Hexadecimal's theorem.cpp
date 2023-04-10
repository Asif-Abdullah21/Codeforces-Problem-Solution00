/*
#include<bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main()
{
    int n;// shortcut , muhammad_sayem
    cin >> n;

    cout << 0 << " " << 0 << " " << n << endl;

    return 0;
}

*/

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
    ll n,i,f=0;
    cin >>n;

    ll fibo[50];
    fibo[0] =0;
    fibo[1] =1;

    for(i=2; i<=50; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }


    if(n==0) cout << 0 << ' '<< 0 << ' '<< 0 << endl;
    else{
        for(i=2; i<=50; i++)
        {
            if(fibo[i]==n)
            {
                cout << 0 <<" "<< fibo[i-2] << " "<<  fibo[i-1]<< endl;
                f=1;
                break;
            }
        }


        if(f==0) cout << "I'm too stupid to solve this problem\n";
    }


    return 0;
}

