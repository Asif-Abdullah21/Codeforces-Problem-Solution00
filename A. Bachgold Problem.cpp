#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;

    if(n%2==0)
    {
        cout << n/2 << endl;
        for(int i=1;i<=(n/2);i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        n = n-3;
        cout << (n/2)+1 << endl;
        for(int i=1;i<=(n/2);i++)
        {
            cout << 2 << " ";
        }
        cout << 3<< endl;
    }


    return 0;
}
