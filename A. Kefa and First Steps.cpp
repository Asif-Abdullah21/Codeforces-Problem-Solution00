#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin >> n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int cnt;
    for(i=0; i<n-1; i++)
    {
        if(a[i]<=a[i+1]) cnt++;
    }

    cout << cnt << endl;



    return 0;
}
