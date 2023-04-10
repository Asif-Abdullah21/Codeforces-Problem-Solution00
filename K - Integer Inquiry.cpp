#include<bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    string s[105];
    while(cin >> str && str != "0")
    {


        for(int i=0;i<105;i++)
        {
            s[i]='0';
        }

        for(int i=0;i<str.size();i++)
        {
            s[i] += (str[i]-48);
        }

    }

    cout << s[0];

    return 0;
}


