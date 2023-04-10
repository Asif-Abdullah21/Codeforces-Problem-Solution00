#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum1=0,sum2=0,flag=0;
    string str;
    cin >> n>> str;

    for(i=0;i<n/2;i++) sum1 += str[i]-48;
    for(i=n/2;i<n;i++) sum2 += str[i]-48;

    if(sum1 != sum2)
    {
        cout << "NO\n";
    }
    else{
        for(i=0;i<n;i++)
        {
            if(str[i] != '4' && str[i] !='7')
            {
                flag=1;
                break;
            }
        }

        if(flag==0) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}
