#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        cout << str[0];

        for(int i=1;i<str.size()-2;i++)
        {
            if(str[i] == str[i+1])
            {
                cout << str[i];
                i++;
            }
        }

        cout << str[str.size()-1];

        cout << endl;
    }

    return 0;
}

