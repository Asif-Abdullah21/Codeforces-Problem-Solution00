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

int t;
cin >> t;

while(t--)
{
    int n,d,i;
    cin >> n >> d;
    string str;
    cin >> str;

    int save_i=0;
    for(i=0;i<n;i++)
    {
        if(str[i]-'0'<d)
        {
            break;
        }
        else cout << str[i];
    }
    save_i=i;
    cout << d;

    for ( i = save_i; i < n; i++)
    {
        cout << str[i];
    }

    cout << endl;
    
}

return 0;
}