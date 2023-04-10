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

        for(i=0,j=str.size()-1;i<=str.size()/2;i++,j--)
        {
            if(str[i] != str[j]) flag = 1;
        }

        if(flag==1) cout << str << endl;
        else
        {
            for(i=0;i<str.size()-1;i++)
            {
                for(j=i+1;j<str.size();j++)
                {
                    if(str[i]>str[j])
                    {
                        ch = str[i];
                        str[i] = str[j];
                        str[j] = ch;
                    }
                }
            }

            for(i=0,j=str.size()-1;i<=str.size()/2;i++,j--)
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

