#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;

    while(t--)
    {
        string pi = "314159265358979323846264338327";
        string str;
        cin >> str;
        int cnt=0;

        for(i=0;i<str.size();i++)
        {
            if(str[i] != pi[i]) break;
            else cnt++;
        }

        cout << cnt << endl;

    }

    return 0;
}
