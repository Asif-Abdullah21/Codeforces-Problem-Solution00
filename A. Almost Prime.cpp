#include<bits/stdc++.h>
using namespace std;
#define N 4000
int a[N];

int main()
{
    int n,i,j,cnt=0;
    cin >>n;
    a[1] =1;

    for(i=2; i<=sqrt(n); i++)
    {
        if(a[i]==0)
        {
            for(j=i+i; j<=n; j+=i)
            {
                a[j] = 1;
            }
        }

    }


    int cnt_2=0;
    for(i=1; i<=n; i++)
    {
        cnt=0;
        for(j=2; j<=i; j++)
        {
            if(i%j==0)
            {
                if(a[j]==0) cnt++;
            }
        }
        if(cnt==2) cnt_2++;
    }

    cout << cnt_2 << endl;

    return 0;
}


