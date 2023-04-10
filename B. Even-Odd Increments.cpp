#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        long long n,q,i,x,y,j,sum=0,even_cnt=0,odd_cnt=0;
        cin >> n >> q;
        long long a[n];

        for(i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i]%2==0) even_cnt++;
            else odd_cnt++;
        }
        for(j=0; j<q; j++)
        {

            cin >> x>> y;

            if(x==0)
            {
                sum += y*even_cnt;
                if(y%2 !=0)
                {
                    odd_cnt = n;
                    even_cnt=0;
                }
            }
            else
            {
                sum += y*odd_cnt;

                if(y%2 !=0)
                {
                    even_cnt = n;
                    odd_cnt = 0;
                }
            }

            cout << sum << endl;


        }


    }

    return 0;
}
