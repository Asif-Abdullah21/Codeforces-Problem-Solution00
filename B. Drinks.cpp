#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int a[n];
    int sum =0;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ///cout << showpoint;
    ///cout << fixed;
    ///cout << setprecision(12);
    double ans = (1.0*sum)/n;

    cout << ans << endl;



    return 0;
}
