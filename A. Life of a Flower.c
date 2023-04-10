#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        int n,flag=0,sum=1;;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++) cin >> a[i];

        if(a[0]==1) sum = 2;

        for(i=1;i<n;i++)
        {
            if(a[i] == 0 && a[i-1]==0)
            {
                flag=1;
                break;
            }
            else if(a[i] == 1 && a[i-1]==1) sum += 5;
            else if(a[i] == 1 && a[i-1] == 0) sum += 1;
        }

        if(flag==1) cout << "-1\n";
        else cout << sum << endl;

    }
}
