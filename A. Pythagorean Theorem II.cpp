#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,cnt=0,a,b;
    cin >> n;

    for(a=1; a<=n; a++)
    {
        for(b=1; b<=n; b++)
        {

            if(a<=b)
            {
                int c_sqr =(a*a)+(b*b);//otivul sqr = lombo sqr + vumi sqr
                int hypotenuse=sqrt(c_sqr);//hypotenuse = otivuj

                if(hypotenuse*hypotenuse!=c_sqr) continue;
                else if(hypotenuse<=n) cnt++;
            }


        }
    }

    cout << cnt << endl;
}
