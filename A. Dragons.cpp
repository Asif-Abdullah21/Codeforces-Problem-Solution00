#include<bits/stdc++.h>
using namespace std;

int main()
{
    int krito_s,n,f=0;
    cin >> krito_s >> n;
    int cnt=0;

    pair<int,int> a[n+5];//array of dragon strength and bonus;
    for(int i=0; i<n; i++)
    {
        cin >> a[i].first>> a[i].second;
    }

    sort(a,a+n);

    for(int i=0; i<n; i++)
    {
        if(krito_s>a[i].first)
        {
            cnt++;
            krito_s +=a[i].second;
        }
        else break;

    }


    if(cnt==n) cout << "YES\n";
    else cout << "NO\n";



    return 0;
}
