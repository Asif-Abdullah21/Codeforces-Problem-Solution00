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

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);
    if(a[0]==-1) a[0] = 1;
    else if(a[0]==1) a[0] = -1;


    if(a[1]==-1) a[1] = 1;
    else if(a[1]==1) a[1] = -1;

    long long sum = 0;

     for(int i=0;i<n;i++)
    {
        sum += a[i];
    }

    cout << sum << endl;
    }


    return 0;
}
