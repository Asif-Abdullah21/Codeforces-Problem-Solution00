#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin >> n;
    cin.ignore();
    string str[n+5];

    for(i=0;i<n;i++)
    {
        getline(cin,str[i]);
    }

    int cnt=1,flag=0;

    for(i=1;i<n;i++)
    {
        flag=0;
        for(j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
