#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    for(int i=1;i*m<=n;i++)
    {
        n++;
    }

    cout << n << endl;
    return 0;
}
