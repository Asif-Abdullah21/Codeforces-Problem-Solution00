
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        int n,i,j,k;
        cin >> n;

        int a[(n*n)+5];

        i=1,j=n*n;
        for(k=1; k<=n*n; k++)
        {
            if(k%2!=0)
            {
                a[k]=i;
                i++;
            }
            else
            {
                a[k] = j;
                j--;
            }
        }

        int x=1,cnt=0;

        for(k=1; k<=n; k++)
        {
            cnt=0;
            if(k%2!=0)
            {
                for(i=x; i<x+n; i++)
                {
                    cout << a[i] << " ";

                }
                x = x+n;
                cout << endl;
            }
            else
            {
                for(j=x+n-1; j>=x; j--)
                {
                    cout << a[j] << " ";

                }
                x = x+n;
                cout << endl;
            }
        }

    }

    return 0;
}
