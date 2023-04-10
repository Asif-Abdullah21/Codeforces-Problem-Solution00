#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string str;
    cin >> str;

    if(str[0]!='-') cout << str << endl;
    else if(str[2]=='0' && str.size() == 3) cout << 0 << endl;
    else
    {
        if(str[str.size()-1]>=str[str.size()-2])
        {
            for(int i=0; i<str.size()-1; i++)
                cout << str[i];
        }

        else if(str[str.size()-1]<str[str.size()-2])
        {
            for(int i=0; i<str.size()-2; i++)
            {
                cout << str[i];
            }

            cout << str[str.size()-1];
        }
    }

    return 0;
}
