#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    char ch;
    cin >> t;

    while(t--)
    {
        int flag=0;
        string str;
        cin >> str;
        string str2;
        str2 = str;

        reverse(str2.begin(),str2.end());
        if(str != str2) flag=1;

        if(flag==1) cout << str << endl;
        else
        {
            sort(str.begin(),str.end());

            for(i=0,j=str.size()-1; i<=str.size()/2; i++,j--)
            {
                if(str[i] != str[j])
                {
                    cout << str << endl;
                    flag=2;
                    break;
                }
            }

            if(flag != 2) cout << -1 << endl;

        }

    }

    return 0;
}


